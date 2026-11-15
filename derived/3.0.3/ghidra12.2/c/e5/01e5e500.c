
/* WARNING: Removing unreachable block (ram,0x01e5e5ec) */
/* WARNING: Removing unreachable block (ram,0x01e5e5fc) */

uint FUN_01e5e500(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  long lStack_88;
  float local_7c;
  undefined4 uStack_78;
  float local_74;
  undefined4 local_64;
  
  lVar8 = *(long *)(param_1 + 0x338);
  uVar14 = *(undefined4 *)(lVar8 + 0x27c);
  fVar11 = *(float *)(lVar8 + 0x278) + 2.5;
  fVar12 = *(float *)(lVar8 + 0x280) + 2.5;
  uVar2 = *(undefined4 *)(lVar8 + 0x2b4);
  fVar13 = (float)(int)((int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0)) * 5.0;
  fVar11 = (float)(int)((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0)) * 5.0;
  local_90 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_88 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_7c = fVar13;
  uStack_78 = uVar14;
  local_74 = fVar11;
  uVar5 = FUN_035aa210((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
                       (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0),&local_90);
  if ((uVar5 & 1) != 0) {
    local_a0 = CONCAT44(uStack_78,local_7c);
    *(float *)(param_1 + 0x430) = fVar13;
    *(undefined4 *)(param_1 + 0x434) = uVar14;
    *(float *)(param_1 + 0x438) = fVar11;
    *(undefined4 *)(param_1 + 0x444) = uVar2;
    local_98 = local_74;
    FUN_016d95a4(*(undefined8 *)(param_1 + 0x358),&local_7c,0);
    local_64 = uVar2;
    FUN_01e39520(*(undefined8 *)(param_1 + 0x358),&local_a0,&local_64,0);
    *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x750) = 2;
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    puVar4 = PTR_DAT_04bb2f00;
    puVar3 = PTR_DAT_04bb2ef8;
    lVar8 = *(long *)(param_1 + 0x358);
    if (*(long *)(lVar8 + 0xb0) != lVar8 + 0xa8) {
      lVar10 = (long)*(int *)(lVar8 + 0xbc);
      plVar9 = (long *)(*(long *)(lVar8 + 0xb0) - lVar10);
      puVar1 = PTR_DAT_04bb2f08 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          *(undefined **)puVar3 = puVar1;
          __cxa_guard_release(puVar4);
        }
        if ((plVar9 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar3), (uVar7 & 1) != 0)) {
          *(undefined1 *)((long)plVar9 + 0x5074) = 0;
          break;
        }
        plVar9 = (long *)(*(long *)((long)plVar9 + lVar10 + 8) - lVar10);
      } while (plVar9 != (long *)((lVar8 + 0xa8) - lVar10));
    }
  }
  return uVar5 & 1;
}

