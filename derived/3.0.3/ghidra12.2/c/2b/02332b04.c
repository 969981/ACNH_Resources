
/* WARNING: Removing unreachable block (ram,0x02332c18) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_02332b04(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  byte *pbVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38;
  char local_37;
  uint local_14;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
      bVar8 = *(byte *)(param_1 + 0x1ee8);
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar6 + 0x158);
      }
      bVar7 = *pbVar2;
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 != bVar8) {
        return false;
      }
    }
    if (((*(byte *)(param_1 + 0x17d0) >> 4 & 1) == 0) && ((*(byte *)(param_1 + 0x17ce) & 1) == 0)) {
      if ((param_2 & 1) != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x60);
        if (puVar9 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            puVar9 = &DAT_05240280;
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar9 = &DAT_05240280;
          }
        }
        if (puVar9[0x227] == 0) {
          return false;
        }
        local_14 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
        local_40 = 0x2f;
        uVar5 = FUN_03850890(puVar9[0x227],0x2f,0,local_14);
        if ((uVar5 & 1) == 0) {
          return false;
        }
      }
      local_14 = *(uint *)(param_1 + 0x230);
      FUN_0071c8d0(&local_40,PTR_DAT_04bb32f8,&local_14,0);
      plVar3 = (long *)CONCAT44(uStack_3c,local_40);
      if (plVar3 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3278);
        if ((uVar5 & 1) == 0) {
          local_37 = '\0';
        }
      }
      lVar6 = CONCAT44(uStack_3c,local_40);
      bVar1 = (lVar6 != 0 && local_38 != '\0') && local_37 != '\0';
      if ((lVar6 != 0 && local_38 != '\0') && local_37 != '\0') {
        if ((param_3 & 1) == 0) {
          FUN_008fe020(lVar6,*(int *)(param_1 + 0x1810) - 5U < 2);
        }
        else {
          FUN_008fe104();
        }
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x10;
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x10000;
        return bVar1;
      }
      return bVar1;
    }
  }
  return false;
}

