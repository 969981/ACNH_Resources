
bool FUN_001674a8(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0x10)) {
    return (char)param_1[2] == '\0';
  }
  return false;
}

