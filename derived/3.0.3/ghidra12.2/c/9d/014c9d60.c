
/* WARNING: Removing unreachable block (ram,0x014c9ec0) */
/* WARNING: Removing unreachable block (ram,0x014c9ee0) */
/* WARNING: Removing unreachable block (ram,0x014c9f2c) */

void FUN_014c9d60(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_54;
  
  lVar9 = *(long *)PTR_DAT_04bb3968;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x175a0) != 0)) {
    local_a8 = local_a8 & 0xffffff00;
    local_b0 = &PTR_FUN_04a74ef8;
    if (*(int *)(lVar9 + 0xb88) != 0) {
      lVar12 = (long)*(int *)(lVar9 + 0xb88) << 3;
      puVar10 = *(undefined8 **)(lVar9 + 0xb90);
      do {
        (*(code *)*local_b0)(&local_b0,*puVar10);
        lVar12 = lVar12 + -8;
        puVar10 = puVar10 + 1;
      } while (lVar12 != 0);
    }
  }
  if ((*(int *)(param_1 + 0xb58) == 5) && (lVar9 = FUN_014bac20(param_1 + 0xbd0), lVar9 != 0)) {
    FUN_02b8233c(lVar9,0);
  }
  *(undefined4 *)(param_1 + 0xb58) = 0;
  *(undefined8 *)(param_1 + 0xb68) = 0;
  *(undefined8 *)(param_1 + 0xb70) = 0;
  *(undefined4 *)(param_1 + 0xb78) = 0;
  local_b0 = (undefined **)0xfffe;
  FUN_0277d4ac(&local_b0);
  *(undefined8 *)(param_1 + 0xba8) = 0;
  *(undefined8 *)(param_1 + 0xbad) = 0;
  *(undefined4 *)(param_1 + 0xba0) = (undefined4)local_b0;
  puVar5 = PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0xba4) = local_b0._4_4_;
  puVar6 = PTR_DAT_04bbcf08;
  *(undefined1 *)(param_1 + 0xbc8) = 0;
  local_a8 = 0;
  *(undefined4 *)(param_1 + 0xbcc) = *(undefined4 *)puVar5;
  local_b0 = (undefined **)(puVar6 + 0x10);
  FUN_014ba7d4(param_1 + 0xbd0,&local_b0);
  if (0 < *(int *)(param_1 + 0xc28)) {
    lVar9 = 0;
    puVar10 = *(undefined8 **)(param_1 + 0xc38);
    do {
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0xc30) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar11 = puVar10;
      *(undefined8 **)(param_1 + 0xc38) = puVar11;
      puVar10 = puVar11;
    } while (lVar9 < *(int *)(param_1 + 0xc28));
  }
  *(undefined4 *)(param_1 + 0xc28) = 0;
  local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
  local_54 = 0;
  if ((((*(float *)(param_1 + 0x408) <= *(float *)(param_1 + 0x414)) &&
       (*(float *)(param_1 + 0x40c) <= *(float *)(param_1 + 0x418))) &&
      (*(float *)(param_1 + 0x410) <= *(float *)(param_1 + 0x41c))) &&
     (fVar14 = ((float)*(int *)(param_1 + 0x430) * 5.0 +
               (float)*(int *)(param_1 + 0x440) * 5.0 + 5.0) * 0.5 + -0.001, !NAN(fVar14))) {
    *(float *)(param_1 + 0xa3c) = fVar14;
    *(undefined4 *)(param_1 + 0xa40) = 0;
    *(float *)(param_1 + 0xa44) =
         ((float)*(int *)(param_1 + 0x434) * 5.0 + (float)*(int *)(param_1 + 0x444) * 5.0 + 5.0) *
         0.5 + -0.001;
  }
  puVar6 = PTR_DAT_04bbcf00;
  puVar5 = PTR_DAT_04bbcef8;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar9 = (long)*(int *)(param_1 + 0xbc);
    plVar13 = (long *)(*(long *)(param_1 + 0xb0) - lVar9);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
        *(undefined **)puVar5 = puVar1;
        __cxa_guard_release(puVar6);
      }
      if ((plVar13 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,puVar5), (uVar8 & 1) != 0)) {
        puVar2 = (uint *)(plVar13 + 0x51);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 & 0xfffffffd;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        break;
      }
      plVar13 = (long *)(*(long *)((long)plVar13 + lVar9 + 8) - lVar9);
    } while (plVar13 != (long *)((param_1 + 0xa8) - lVar9));
  }
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,2);
  if (*(int *)(param_1 + 0x378) != 2) {
    FUN_03ebb160(param_1 + 0x370);
  }
  *(undefined4 *)(param_1 + 0xe5c) = 0;
  *(undefined4 *)(param_1 + 0xe64) = 1;
  *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0xb28);
  *(undefined8 *)(param_1 + 0xe54) = 0x100000001;
  return;
}

