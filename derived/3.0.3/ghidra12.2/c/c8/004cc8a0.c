
void FUN_004cc8a0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_28;
  
  if (param_2 != 0) {
    local_28 = param_2;
    lVar3 = FUN_0049cee0(param_1 + 0xe8,&local_28);
    if ((lVar3 == 0) ||
       ((int)(*(uint *)(lVar3 + 4) |
             ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0xf8)) * 0x20000000) < 0)) {
      local_28 = param_2;
      lVar3 = FUN_0049cee0(param_1 + 0xe8,&local_28);
      if ((lVar3 == 0) ||
         ((int)(*(uint *)(lVar3 + 4) |
               ((int)lVar3 - (int)*(undefined8 *)(param_1 + 0xf8)) * 0x20000000) < 0)) {
        FUN_004ce360(param_1,*(undefined4 *)(param_1 + 0xf0),local_28);
      }
      uVar4 = FUN_00428440(param_2);
      if ((uVar4 & 0x1f) == 7) {
        iVar1 = FUN_004284f0();
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            uVar5 = FUN_004285f0(param_2,iVar1);
            FUN_004cc8a0(param_1,uVar5);
            iVar1 = iVar1 + 1;
            iVar2 = FUN_004284f0(param_2);
          } while (iVar1 < iVar2);
        }
      }
      else {
        uVar4 = FUN_00428440(param_2);
        if (((uVar4 & 0x1f) == 8) || (uVar4 = FUN_00428440(param_2), (uVar4 & 0x1f) == 6)) {
          uVar5 = FUN_00426d90(param_2);
          FUN_004cc8a0(param_1,uVar5);
        }
      }
    }
  }
  return;
}

