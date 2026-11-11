
void FUN_005d4b20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  
  if (*(char *)(param_3 + 0x268) != '\0') {
    FUN_005d4710();
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar1 != 0) {
      FUN_00443a00(lVar1,"TtreleaseStuckParticlesCpu");
    }
    uVar2 = *param_4;
    lVar1 = FUN_0053b100(param_3);
    if (*(char *)(lVar1 + 4) != '\0') {
      local_38 = CONCAT44(*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 8));
      lVar1 = *(long *)(param_3 + 0x18);
      if (0 < *(int *)(lVar1 + 0x90)) {
        lVar3 = 0;
        do {
          lVar1 = *(long *)(*(long *)(lVar1 + 0x88) + lVar3 * 8);
          if (*(int *)(lVar1 + 0x24) == 0xd) {
            FUN_005d6ea0(param_3,lVar1,&local_38,uVar2);
          }
          else if (*(int *)(lVar1 + 0x24) == 1) {
            FUN_005d6e20(param_3,lVar1,&local_38,uVar2);
          }
          lVar1 = *(long *)(param_3 + 0x18);
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(lVar1 + 0x90));
      }
    }
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar1 != 0) {
      FUN_00443a70(lVar1,&DAT_04085310);
    }
  }
  return;
}

