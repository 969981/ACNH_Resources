
void FUN_013d03c0(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  byte bVar11;
  uint uVar12;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  bVar11 = 0;
  uVar12 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if (bVar11 < 0x14) {
      uVar9 = (uint)(char)bVar11;
      if (((int)uVar9 < (int)(uint)*(byte *)(param_1 + 0x59a)) ||
         ((int)uVar9 < (int)((uint)*(byte *)(param_1 + 0x59b) + (uint)*(byte *)(param_1 + 0x59a))))
      {
        if (((param_2 >> (ulong)(uVar9 & 0x1f) & 1) != 0) && (lVar8 = *(long *)puVar3, lVar8 != 0))
        {
          uVar9 = *(uint *)(param_1 + 0x4f8 + ((long)((ulong)uVar12 << 0x20) >> 0x1d));
          if ((((uVar9 == 0) ||
               (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                    ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
              ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar9))
          {
            plVar10 = (long *)0x0;
          }
          if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
            plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
            lVar8 = *(long *)puVar3;
            iVar5 = (**(code **)(*plVar6 + 0x60))();
            if (iVar5 < 0x11) {
              uVar9 = 1;
            }
            else {
              uVar9 = *(uint *)(lVar8 + 0x5e8);
              if (4 < uVar9) goto LAB_013d0500;
              uVar9 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
            }
          }
          else {
LAB_013d0500:
            uVar9 = 0;
          }
          if (plVar10 != (long *)0x0) {
            lVar8 = plVar10[0x2a];
            if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bbc7b0 = puVar1;
              __cxa_guard_release(PTR_DAT_04bbc7b8);
            }
            uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbc7b0);
            uVar2 = 0;
            if ((int)lVar8 == 1) {
              uVar2 = uVar9;
            }
            if ((((uVar7 & 1) != 0) && (uVar2 != 0)) &&
               ((uVar7 = FUN_013e53dc(plVar10), (uVar7 & 1) != 0 &&
                (lVar8 = plVar10[0x57], lVar8 != 0)))) {
              *(undefined4 *)(lVar8 + 0x2b0) = *(undefined4 *)(lVar8 + 700);
            }
          }
        }
        bVar11 = bVar11 + 1;
      }
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x14) {
      return;
    }
  } while( true );
}

