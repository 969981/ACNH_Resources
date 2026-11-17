
/* WARNING: Removing unreachable block (ram,0x02e5006c) */

undefined8 FUN_02e50008(long param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x4ec) == 1) {
    puVar1 = &DAT_040db85a;
  }
  else if (*(int *)(param_1 + 0x4ec) == 2) {
    puVar1 = &DAT_040980d5;
  }
  else if (*(char *)(param_1 + 0x4f4) == '\0') {
    puVar1 = &DAT_040b7356;
  }
  else {
    if (0 < *(int *)(param_1 + 800)) {
      return 1;
    }
    puVar1 = &DAT_04069146;
  }
  FUN_038d1270(param_1 + 0x6b8,puVar1);
  return 0;
}

