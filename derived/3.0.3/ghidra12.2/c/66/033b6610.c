
/* WARNING: Removing unreachable block (ram,0x033b679c) */

void FUN_033b6610(long param_1,long *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_80 [3];
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bc4cc8;
  puVar3 = PTR_DAT_04bc4cc0;
  lVar8 = *param_2;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x58) != lVar8 + 0x50) {
      lVar13 = (long)*(int *)(lVar8 + 100);
      lVar14 = *(long *)(lVar8 + 0x58) - lVar13;
      puVar1 = PTR_DAT_04bc4cd0 + 0x10;
      do {
        lVar9 = *(long *)(lVar14 + 0xa0);
        if (lVar9 != 0) {
          if (*(long *)(lVar9 + 0x80) != lVar9 + 0x78) {
            lVar15 = (long)*(int *)(lVar9 + 0x8c);
            puVar12 = (undefined8 *)(*(long *)(lVar9 + 0x80) - lVar15);
            do {
              if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
                *(undefined **)puVar3 = puVar1;
                __cxa_guard_release(puVar4);
              }
              if (((((puVar12 != (undefined8 *)0x0) &&
                    (uVar6 = (**(code **)*puVar12)(puVar12,puVar3), (uVar6 & 1) != 0)) &&
                   (lVar10 = puVar12[0x42], lVar10 != 0)) &&
                  ((lVar11 = *(long *)(lVar10 + 0x48), lVar11 != 0 && (*(int *)(lVar11 + 0x18) != 0)
                   ))) && ((**(long **)(lVar11 + 0x20) != 0 &&
                           (*(long *)(**(long **)(lVar11 + 0x20) + 0x10) != 0)))) {
                if (*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) != 0) {
                  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2230 + 0xd0) + 0x26c) = 1;
                  lVar10 = puVar12[0x42];
                }
                if (((*(int *)(*(long *)(lVar10 + 0x48) + 0x18) != 0) &&
                    (lVar10 = **(long **)(*(long *)(lVar10 + 0x48) + 0x20), lVar10 != 0)) &&
                   (lVar11 = *(long *)(lVar10 + 0x10), lVar11 != 0)) {
                  local_64 = 1;
                  *(undefined4 *)(lVar10 + 4) = *(undefined4 *)(lVar11 + 0x14a0);
                  *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar11 + 0x14a4);
                  local_80[1] = 0;
                  local_80[2] = 0;
                  local_80[0] = lVar11;
                  (*(code *)**(undefined8 **)(lVar11 + 0x40))
                            ((undefined8 *)(lVar11 + 0x40),1,local_80);
                  *(undefined8 *)(lVar10 + 0x10) = 0;
                }
              }
              puVar12 = (undefined8 *)(*(long *)((long)puVar12 + lVar15 + 8) - lVar15);
            } while (puVar12 != (undefined8 *)((lVar9 + 0x78) - lVar15));
          }
        }
        plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x20);
        local_80[0] = lVar14;
        if (plVar7 == (long *)0x0) {
          FUN_032d2700();
                    /* WARNING: Does not return */
          pcVar2 = (code *)UndefinedInstructionException(0,0x33b6834);
          (*pcVar2)();
        }
        (**(code **)(*plVar7 + 0x30))(plVar7,local_80);
        lVar14 = *(long *)(lVar14 + lVar13 + 8) - lVar13;
      } while (lVar14 != (lVar8 + 0x50) - lVar13);
    }
  }
  return;
}

