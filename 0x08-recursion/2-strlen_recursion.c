/**
 * _strlen_recursion-return length of a string
 * @s:the string will be measured
 * Return:length value
*/
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
