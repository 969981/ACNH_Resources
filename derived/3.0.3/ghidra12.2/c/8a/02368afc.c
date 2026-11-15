
undefined8 FUN_02368afc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  byte local_4 [4];
  
  if (DAT_056b6f18 != 0) {
    local_4[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    if (*(char *)(param_1 + 0x17ac) == '\0') {
      if ((*(uint *)(param_1 + 0xed0) >> 0x15 & 1) != 0) {
        FUN_02ef6cf0(DAT_056b6f18,local_4,0);
        return 1;
      }
      if ((*(uint *)(param_1 + 0xed0) >> 0x16 & 1) != 0) {
        FUN_02ef6cf0(DAT_056b6f18,local_4,1);
        return 1;
      }
    }
    iVar3 = 0;
    if (DAT_051f0338 != 0) {
      iVar3 = *(int *)(DAT_051f0338 + 0xc);
    }
    if ((*(char *)(param_1 + 0x17ac) == '\0' && iVar3 == 0) &&
       ((*(uint *)(param_1 + 0xed0) >> 0x1e & 1) != 0)) {
      iVar3 = 0;
      if (DAT_05aed670 != 0) {
        if (*(long *)(DAT_05aed670 + 0x330) == 0) {
          iVar3 = 0;
        }
        else {
          puVar2 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar1 = FUN_006bd550(*puVar2,0);
          iVar3 = 0;
          if ((iVar1 == 0x758f7eaf) && (iVar3 = 0, DAT_05aed670 != 0)) {
            iVar3 = 0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              iVar3 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
            }
          }
        }
      }
      if (DAT_05292434 == iVar3) {
        FUN_016b8158(DAT_0523a180);
      }
      else if (DAT_053d2ea8 != 0) {
        FUN_0206ff58();
      }
    }
  }
  return 0;
}

