
/* WARNING: Removing unreachable block (ram,0x007770fc) */
/* WARNING: Removing unreachable block (ram,0x0077710c) */

void FUN_007770b0(long param_1,ulong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  int iVar12;
  undefined **local_80;
  uint local_78;
  uint uStack_74;
  ulong local_70;
  ulong local_68;
  
  if (*(long *)(param_1 + 0x280) != 0) {
    if ((param_2 & 1) != 0) {
      local_70 = local_70 & 0xffffffff00000000;
      FUN_0155aff0(*(undefined8 *)(param_1 + 0x5a8),
                   *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x10);
    }
    puVar8 = (uint *)**(undefined8 **)(param_1 + 0x5a8);
    uVar3 = (*(code *)**(undefined8 **)(puVar8 + 4))();
    iVar4 = DAT_0521b5b8;
    lVar7 = *(long *)(puVar8 + 2) + (long)(int)uVar3 * 0x580;
    if (*puVar8 <= uVar3) {
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + 0x548) == 0) {
      iVar1 = DAT_0521b5cc + 1;
      if (iVar1 == DAT_0521b5bc) {
        local_70 = 0;
        uVar5 = 0x8000000080000000;
      }
      else {
        puVar11 = *(ulong **)(param_1 + 0x5a8);
        iVar9 = DAT_0521b5bc;
        iVar12 = DAT_0521b5b8;
        do {
          puVar8 = (uint *)*puVar11;
          uVar3 = (*(code *)**(undefined8 **)(puVar8 + 4))();
          if (((uint)(iVar12 - DAT_0521b5b8) < 0x70) && ((uint)(iVar9 - DAT_0521b5bc) < 0x60)) {
            uVar6 = (iVar12 - DAT_0521b5b8) + (iVar9 - DAT_0521b5bc) * 0x70;
            lVar7 = *(long *)(puVar8 + 2) + (long)(int)uVar3 * 0x580;
            if (*puVar8 <= uVar3) {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + (ulong)(uVar6 >> 5) * 4 + 8) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
            {
              local_70 = *puVar11;
              uVar5 = CONCAT44(iVar9,iVar12);
              goto LAB_0077723c;
            }
          }
          if (iVar12 < DAT_0521b5c8) {
            iVar12 = iVar12 + 1;
          }
          else {
            iVar9 = iVar9 + 1;
            iVar12 = DAT_0521b5b8;
          }
        } while (iVar4 != iVar12 || iVar1 != iVar9);
        local_70 = 0;
        uVar5 = 0x8000000080000000;
      }
LAB_0077723c:
      local_68 = uVar5;
      while( true ) {
        uVar3 = (uint)uVar5;
        uVar6 = (uint)(local_68 >> 0x20);
        if ((uVar3 == 0x80000000) && (uVar6 == 0x80000000)) break;
        lVar7 = (long)(int)(uVar3 + *(uint *)(param_1 + 0x278) * uVar6);
        if (*(uint *)(param_1 + 0x27c) <= uVar6 || *(uint *)(param_1 + 0x278) <= uVar3) {
          lVar7 = 0;
        }
        puVar2 = (undefined1 *)(*(long *)(param_1 + 0x280) + lVar7 * 2);
        local_80 = &PTR_FUN_048f9730;
        local_78 = uVar3;
        uStack_74 = uVar6;
        uVar5 = FUN_01318220(&local_80);
        puVar10 = puVar2;
        if (((uVar5 & 1) != 0) && (iVar4 = FUN_013188b0(&local_80), iVar4 != 2)) {
          puVar10 = puVar2 + 1;
          *puVar2 = 1;
        }
        *puVar10 = 0;
        FUN_0155b210(&local_70);
        uVar5 = local_68 & 0xffffffff;
      }
      puVar8 = (uint *)**(undefined8 **)(param_1 + 0x5a8);
      uVar3 = (*(code *)**(undefined8 **)(puVar8 + 4))();
      lVar7 = *(long *)(puVar8 + 2) + (long)(int)uVar3 * 0x580;
      if (*puVar8 <= uVar3) {
        lVar7 = 0;
      }
      *(undefined4 *)(lVar7 + 0x548) = 0xffffffff;
      memset((void *)(lVar7 + 8),0,0x540);
      *(undefined1 *)(lVar7 + 0x550) = 0;
      *(undefined1 *)(lVar7 + 0x568) = 0;
    }
  }
  return;
}

