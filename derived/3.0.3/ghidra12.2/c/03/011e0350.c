
/* WARNING: Removing unreachable block (ram,0x011e0570) */
/* WARNING: Removing unreachable block (ram,0x011e0580) */
/* WARNING: Removing unreachable block (ram,0x011e058c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011e0350(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  long lVar13;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  long *local_88;
  char local_80;
  char local_7f;
  long *local_78;
  char local_70;
  char local_6f;
  int local_64;
  
  if ((param_2 & 1) != 0) {
    FUN_011deff0(param_1);
    return;
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_78,&DAT_050dfb2c,&local_b0,0);
  plVar4 = local_78;
  puVar7 = PTR_DAT_04bbbb50;
  if (local_78 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
    if ((uVar9 & 1) == 0) {
      local_6f = '\0';
    }
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071c8d0(&local_88,&DAT_050dfb30,&local_b0,0);
  plVar4 = local_88;
  if (local_88 != (long *)0x0) {
    if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb50);
    }
    uVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbbb48);
    if ((uVar9 & 1) == 0) {
      local_7f = '\0';
    }
  }
  puVar7 = PTR_DAT_04bb27a8;
  if (((((local_78 != (long *)0x0) && (local_70 != '\0')) && (local_6f != '\0')) &&
      ((local_88 != (long *)0x0 && (local_80 != '\0')))) && (local_7f != '\0')) {
    if ((DAT_050dfb34 >> 5 & 1) == 0) {
      DAT_050dfb34 = DAT_050dfb34 | 0x20;
      DAT_05146e1c = 0;
    }
    if (0 < *(int *)(param_1 + 0x24f78)) {
      lVar12 = *(long *)PTR_DAT_04bb27a8;
      iVar8 = 0;
      lVar13 = param_1 + 0x278;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      do {
        if ((*(ushort *)(lVar13 + 0x68) >> 3 & 1) != 0) {
          iVar6 = *(int *)(lVar13 + 0x18);
          local_b4 = *(int *)(lVar13 + 0x1c);
          local_90 = iVar6 + 1;
          iStack_8c = local_b4 + 1;
          iVar1 = local_b4 + 2;
          local_c0 = puVar3;
          local_b8 = iVar6;
          local_b0 = puVar2;
          puStack_a8 = puVar3;
          local_a0 = iVar6;
          iStack_9c = local_b4;
          local_98 = puVar3;
          do {
            local_64 = 0;
            lVar10 = *(long *)puVar7;
            if (((*(long *)(lVar10 + 0x1f8) != 0) &&
                (uVar9 = FUN_01376f10(*(undefined4 *)(lVar10 + 0x4b00),&local_c0), (uVar9 & 1) != 0)
                ) && ((local_64 = FUN_01377528(lVar13,&local_c0,
                                               (*(uint *)(lVar10 + 0x4b04) & 2) == 0,0),
                      local_64 != 7 && (((local_64 != 8 && (local_64 != 9)) && (local_64 != 10))))))
            {
              if (((*(char *)(lVar13 + 0x6e) < '\0') &&
                  (*(int *)(lVar12 + 0x4b18) <= *(int *)(lVar13 + 0x18) + 1)) &&
                 ((*(int *)(lVar13 + 0x18) <= *(int *)(lVar12 + 0x4b28) &&
                  ((*(int *)(lVar12 + 0x4b1c) <= *(int *)(lVar13 + 0x1c) + 1 &&
                   (*(int *)(lVar13 + 0x1c) <= *(int *)(lVar12 + 0x4b2c))))))) {
                if (*(int *)(lVar13 + 0x60) == 1) {
                  pplVar11 = &local_78;
LAB_011e06bc:
                  plVar4 = *pplVar11 + 0x4f;
                  plVar5 = plVar4 + (ulong)*(uint *)(lVar13 + 0x58) * 0x24;
                  if (999 < *(uint *)(lVar13 + 0x58)) {
                    plVar5 = plVar4;
                  }
                  if (*(int *)((long)plVar5 + 0xfc) != 4) {
                    lVar10 = (*pplVar11)[0x8cf2];
                    uVar9 = plVar5[0x21];
                    plVar5[0x21] = uVar9 | 0x80000;
                    if ((*(int *)((long)plVar5 + 0xfc) == 2) && (((uint)uVar9 >> 0x1c & 1) == 0)) {
                      FUN_011cf0c0(plVar5,plVar4,(int)lVar10,0,0);
                    }
                  }
                }
                else if (*(int *)(lVar13 + 0x60) == 2) {
                  pplVar11 = &local_88;
                  goto LAB_011e06bc;
                }
                *(ushort *)(lVar13 + 0x68) = *(ushort *)(lVar13 + 0x68) | 0x2000;
              }
              break;
            }
            if (local_b8 < local_90) {
              local_b8 = local_b8 + 1;
            }
            else {
              local_b4 = local_b4 + 1;
              local_b8 = local_a0;
            }
          } while ((iVar6 != local_b8) || (iVar1 != local_b4));
        }
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 0x78;
      } while (iVar8 < *(int *)(param_1 + 0x24f78));
    }
  }
  return;
}

