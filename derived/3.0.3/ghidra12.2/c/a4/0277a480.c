
int FUN_0277a480(void *param_1,uint param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined2 local_7e0;
  undefined2 local_7de;
  undefined4 local_7dc;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_7d8 = (undefined *)CONCAT44(local_7d8._4_4_,param_2);
  piVar2 = *(int **)PTR_DAT_04bc0500 + (ulong)param_2 * 8;
  if (0xbc < param_2) {
    piVar2 = *(int **)PTR_DAT_04bc0500;
  }
  if (*piVar2 == 0) {
    iVar6 = 0;
  }
  else {
    lVar9 = (long)*piVar2 << 3;
    puVar10 = *(undefined8 **)(piVar2 + 2);
    iVar6 = 0;
    puVar1 = PTR_DAT_04bbfe60 + 0x10;
    do {
      local_7de = 0;
      local_7dc = 0;
      local_7e0 = (undefined2)*(undefined4 *)*puVar10;
      FUN_0277d4ac(&local_7e0);
      lVar7 = *(long *)puVar3;
      uVar4 = FUN_0277d6c4(&local_7e0);
      lVar8 = *(long *)puVar3;
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar4 = FUN_0277d6c4(&local_7e0), *(long *)puVar3 != 0)) {
          lVar7 = *(long *)(lVar8 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            local_7d8 = puVar1;
            memset(auStack_7d0,0,0x754);
            uVar4 = nn::os::GetSystemTick();
            local_7c = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
            local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
            local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
            local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
            memcpy(auStack_7d0,param_1,0x754);
            lVar7 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
            uVar5 = FUN_0277d6c4(&local_7e0);
            uVar4 = 0;
            if ((uVar5 >> 3 & 0x1fff) < 0x753) {
              uVar4 = *(uint *)(lVar7 + (ulong)((uVar5 & 0xffff) >> 5) * 4) >> (ulong)(uVar5 & 0x1f)
                      & 1;
            }
            iVar6 = iVar6 + uVar4;
          }
        }
      }
      puVar10 = puVar10 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return iVar6;
}

