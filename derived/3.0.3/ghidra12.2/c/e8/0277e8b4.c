
uint FUN_0277e8b4(short *param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined *local_58;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  long local_48;
  
  sVar2 = *param_1;
  if (sVar2 == -2) {
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4();
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = *(ushort *)(lVar5 + 0x1f8);
      uVar1 = *(uint *)(lVar5 + 0x1d8);
      uVar4 = (uVar4 & 0xffff) - (uint)uVar3;
      if ((uVar4 < uVar1) &&
         (lVar5 = *(long *)(lVar5 + 0x1e0), *(long *)(lVar5 + (long)(int)uVar4 * 8) != 0)) {
        local_4e = param_1[1];
        local_48 = 0;
        local_58 = PTR_DAT_04bc0510 + 0x10;
        local_4c = *(undefined4 *)(param_1 + 2);
        local_50 = sVar2;
        uVar4 = FUN_0277d6c4(&local_50);
        uVar4 = (uVar4 & 0xffff) - (uint)uVar3;
        if ((uVar4 < uVar1) && (*(long *)(lVar5 + (long)(int)uVar4 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
        uVar4 = FUN_01b14730(&local_58);
        goto LAB_0277e9c4;
      }
    }
    uVar4 = 0;
  }
LAB_0277e9c4:
  return uVar4 & 1;
}

