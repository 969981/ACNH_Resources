
bool FUN_0254e720(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar7 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return false;
  }
  uVar16 = *puVar7;
  if ((((uVar16 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar16)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0254e814;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0254e814:
    uVar16 = 0;
  }
  if (plVar14 == (long *)0x0) {
LAB_0254e994:
    bVar8 = false;
  }
  else {
    lVar9 = plVar14[0x2a];
    uVar1 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
    if ((int)lVar9 != 1) {
      return false;
    }
    if ((uVar5 & uVar16) == 0) {
      return false;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return false;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar7 = (uint *)&DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar7 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar7 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar7 = puVar7 + (ulong)*param_1 * 2;
      }
    }
    if ((*puVar7 >> 0xd & 1) == 0) {
      lVar9 = *(long *)PTR_DAT_04bb2720;
      if (lVar9 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar4 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      if (*(int *)(puVar15 + 7) == -0x17df00c3) {
        lVar9 = plVar14[0xe];
        if (lVar9 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if (*(uint *)(lVar9 + 0x280) < 0x149) {
            uVar16 = *(uint *)(lVar9 + 0x280);
          }
        }
        if (uVar16 == 0x93) goto LAB_0254e994;
      }
      else {
        lVar9 = plVar14[0xe];
      }
      uVar16 = 0;
      if (lVar9 != 0) {
        uVar16 = 0;
        if (*(uint *)(lVar9 + 0x280) < 0x149) {
          uVar16 = *(uint *)(lVar9 + 0x280);
        }
      }
      puVar7 = (uint *)FUN_0251d928(uVar16);
      puVar3 = PTR_DAT_04bc2fe8;
      puVar2 = PTR_DAT_04bc2fe0;
      if (*puVar7 != 0) {
        cVar11 = *PTR_DAT_04bc2fe0;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0xa0) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar16 = *(uint *)(puVar3 + 0x34);
            if (-1 < (int)uVar16) {
              if ((char *)((ulong)uVar16 + (long)puVar7) != (char *)0x0) {
                return *(char *)((ulong)uVar16 + (long)puVar7) != '\0';
              }
              break;
            }
            if (uVar16 != 0xffffffff) break;
          }
          puVar12 = (uint *)(ulong)*puVar7;
          if (*puVar7 == 0) {
            return true;
          }
          if (puVar7 == puVar12) {
            return true;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar12));
          *(undefined4 *)(puVar3 + 0x34) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != 0x497ac4d6) {
            piVar13 = piVar13 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0254eac8;
          }
          iVar4 = 0;
          if (*piVar13 != -1) {
            iVar4 = *piVar13;
          }
          *(int *)(puVar3 + 0x34) = iVar4;
          if (*puVar7 == 0) {
            return true;
          }
        } while( true );
      }
    }
LAB_0254eac8:
    bVar8 = true;
  }
  return bVar8;
}

