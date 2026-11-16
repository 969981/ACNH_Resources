
void FUN_028fe550(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 local_69c;
  undefined4 uStack_698;
  uint local_694;
  float local_690 [384];
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  local_694 = 0;
  uVar5 = FUN_0291e130(local_690,&local_694,0);
  uVar3 = local_694;
  puVar2 = PTR_DAT_04bb43c0;
  if (((uVar5 & 1) != 0) && (local_694 != 0)) {
    uVar5 = 0;
    uVar8 = 0;
    iVar9 = 0;
    puVar11 = (undefined4 *)(param_1 + 4);
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      local_69c = puVar11[-1];
      uStack_698 = *puVar11;
      lVar10 = *(long *)puVar2;
      uVar4 = FUN_0277d6c4(&local_69c);
      lVar7 = *(long *)puVar2;
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          uVar4 = FUN_0277d6c4(&local_69c);
          lVar10 = *(long *)puVar2;
          if (lVar10 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              local_80 = 0;
              local_88 = local_69c;
              uStack_84 = uStack_698;
              local_90 = puVar1;
              uVar4 = FUN_0277d6c4(&local_88);
              if (*(long *)puVar2 != 0) {
                lVar7 = *(long *)(lVar10 + 0x57e58);
                uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
                  lVar7 = *(long *)PTR_DAT_04bc0428;
                  uVar4 = FUN_0277d6c4(&local_69c);
                  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
                  if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
                     (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0
                     )) {
                    local_80 = lVar7;
                  }
                }
              }
              uVar6 = FUN_01ae59b0(&local_90);
              if ((uVar6 & 1) != 0) {
                FUN_028fe780(param_1,&local_69c,(int)((local_690[(long)iVar9 * 3] + 2.5) / 5.0),
                             (int)((local_690[(long)iVar9 * 3 + 2] + 2.5) / 5.0),uVar5 & 0xffffffff)
                ;
                uVar8 = uVar8 + 1;
              }
            }
          }
        }
      }
      if (0x3e < uVar5) {
        return;
      }
      iVar9 = iVar9 + 1;
      if (iVar9 == 0x80) {
        return;
      }
      puVar11 = puVar11 + 2;
      uVar5 = uVar5 + 1;
    } while (uVar8 < uVar3);
  }
  return;
}

