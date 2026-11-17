
/* WARNING: Type propagation algorithm not settling */

float FUN_02acafb0(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_DAT_04bb27c0;
  fVar15 = 0.0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0.0;
  }
  uVar14 = *param_1;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar14 = 1;
      goto joined_r0x02acb078;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02acb078;
    }
  }
  uVar14 = 0;
joined_r0x02acb078:
  if (plVar13 != (long *)0x0) {
    lVar8 = plVar13[0x2a];
    if (((*PTR_DAT_04bc3010 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3010);
    }
    uVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc3008);
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar14;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      fVar16 = *(float *)(plVar13[0xd] + 0x278);
      lVar8 = FUN_02aecb38(0x2b);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar8 + 200) + 0xf0))();
      fVar17 = *pfVar7;
      (**(code **)(*(long *)(lVar8 + 0xf8) + 0xf0))((long *)(lVar8 + 0xf8));
      puVar3 = PTR_DAT_04bc4648;
      puVar2 = PTR_DAT_04bc4640;
      lVar8 = *(long *)PTR_DAT_04bb5008;
      uVar14 = (uint)*(ushort *)((long)plVar13 + 0x2ac) - (uint)*(ushort *)(lVar8 + 0xdf0);
      if ((uVar14 < *(uint *)(lVar8 + 0xdd0)) &&
         (puVar9 = *(uint **)(*(long *)(lVar8 + 0xdd8) + (long)(int)uVar14 * 8),
         puVar9 != (uint *)0x0)) {
        uVar14 = *puVar9;
        if (uVar14 != 0) {
          cVar10 = *PTR_DAT_04bc4640;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 0x28) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              uVar14 = *puVar9;
            }
            else if ((-1 < *(int *)puVar3) || (*(int *)puVar3 != -1)) break;
            puVar11 = (uint *)(ulong)uVar14;
            if ((puVar11 == (uint *)0x0) || (puVar9 == puVar11)) break;
            lVar8 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar9 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
            *(undefined4 *)puVar3 = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != -0x49e645a4) {
              piVar12 = piVar12 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_02acb24c;
            }
            iVar4 = 0;
            if (*piVar12 != -1) {
              iVar4 = *piVar12;
            }
            *(int *)puVar3 = iVar4;
            uVar14 = *puVar9;
            if (uVar14 == 0) break;
          } while( true );
        }
LAB_02acb24c:
        fVar15 = fVar16 + fVar17;
      }
    }
  }
  return fVar15;
}

