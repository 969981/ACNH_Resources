
void FUN_016c2dd0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 local_58 [14];
  
  *(undefined8 *)(param_1 + 8) = 0;
  local_58[0] = 4;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xef;
  FUN_016bdc00();
  FUN_016bde70(param_1);
  piVar3 = (int *)(param_1 + 0xa0);
  if (0 < *piVar3) {
    lVar1 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xa8) + lVar1 * 8);
      if (*(char *)((long)puVar2 + 2) != '\0') {
        *(undefined1 *)((long)puVar2 + 2) = 0;
      }
      lVar1 = lVar1 + 1;
      *puVar2 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 **)(param_1 + 0xb0) = puVar2;
    } while (lVar1 < *(int *)(param_1 + 0xa0));
  }
  *piVar3 = 0;
  FUN_016a50e0(*(undefined8 *)PTR_DAT_04bb4930,piVar3,0);
  if ((*piVar3 < 2) && (*piVar3 == 0)) {
    FUN_016ce250(local_58,1);
    FUN_016beae0(param_1,local_58);
    return;
  }
  FUN_016beae0(param_1,**(undefined8 **)(param_1 + 0xa8));
  return;
}

