
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0254f8a0(byte *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  char cVar12;
  uint *puVar13;
  int *piVar14;
  long *plVar15;
  uint uVar16;
  uint local_64 [3];
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_55;
  undefined1 local_51;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  puVar8 = (uint *)PTR_DAT_04bb3238;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar8 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  uVar16 = *puVar8;
  if ((((uVar16 == 0) ||
       (plVar15 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
      ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar16)) {
    plVar15 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar16 = 1;
      goto joined_r0x0254f9a4;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0254f9a4;
    }
  }
  uVar16 = 0;
joined_r0x0254f9a4:
  if (plVar15 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar15[0x2a];
  uVar1 = *(uint *)(plVar15 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
  if ((int)lVar10 != 1) {
    return 0;
  }
  if ((uVar6 & uVar16) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  if ((param_2 & 1) != 0) {
    local_64[0] = 0;
    if (plVar15[0xe] != 0) {
      uVar16 = *(uint *)(plVar15[0xe] + 0x280);
      local_64[0] = 0;
      if (uVar16 < 0x149) {
        local_64[0] = uVar16;
      }
    }
    puVar8 = (uint *)FUN_0251d928(local_64[0]);
    puVar4 = PTR_DAT_04bc2fe8;
    puVar2 = PTR_DAT_04bc2fe0;
    if (*puVar8 != 0) {
      cVar12 = *PTR_DAT_04bc2fe0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          uVar16 = *puVar8;
        }
        else {
          uVar16 = *(uint *)(puVar4 + 0x34);
          if (-1 < (int)uVar16) {
            if (((char *)((ulong)uVar16 + (long)puVar8) != (char *)0x0) &&
               (*(char *)((ulong)uVar16 + (long)puVar8) == '\0')) {
              return 0;
            }
            break;
          }
          if (uVar16 != 0xffffffff) break;
          uVar16 = *puVar8;
        }
        if ((uVar16 == 0) || (puVar13 = (uint *)(ulong)uVar16, puVar8 == puVar13)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar8 + (lVar10 - (long)puVar13);
        if (lVar10 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 0x34) = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar14 = (int *)(lVar10 + 4);
        while (piVar14[-1] != 0x497ac4d6) {
          piVar14 = piVar14 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0254fb2c;
        }
        iVar5 = 0;
        if (*piVar14 != -1) {
          iVar5 = *piVar14;
        }
        *(int *)(puVar4 + 0x34) = iVar5;
        if (*puVar8 == 0) break;
      } while( true );
    }
  }
LAB_0254fb2c:
  bVar11 = *param_1;
  local_64[2] = *(uint *)puVar3;
  local_51 = 0;
  local_55 = 0;
  local_56 = 0;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_64[0] = CONCAT31(local_64[0]._1_3_,bVar11);
  local_64[1] = 1;
  local_58 = 1;
  uVar9 = FUN_02530cec(local_64);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  local_64[0] = 0xc0;
  plVar15[0x318] = plVar15[0x328];
  plVar15[0x318] = 0;
  plVar15[0x319] = plVar15[0x329];
  plVar15[0x319] = 0;
  plVar15[0x31a] = plVar15[0x32a];
  plVar15[0x31a] = 0;
  *(short *)(plVar15 + 0x31b) = (short)plVar15[0x32b];
  plVar15[0x314] = plVar15[0x324];
  plVar15[0x314] = 0;
  plVar15[0x315] = plVar15[0x325];
  plVar15[0x315] = 0;
  plVar15[0x316] = plVar15[0x326];
  plVar15[0x316] = 0;
  plVar15[0x317] = plVar15[0x327];
  plVar15[0x317] = 0;
  plVar15[0x310] = plVar15[800];
  plVar15[0x310] = 0;
  plVar15[0x311] = plVar15[0x321];
  plVar15[0x311] = 0;
  plVar15[0x312] = plVar15[0x322];
  plVar15[0x312] = 0;
  plVar15[0x313] = plVar15[0x323];
  plVar15[0x313] = 0;
  plVar15[0x30c] = plVar15[0x31c];
  plVar15[0x30d] = plVar15[0x31d];
  plVar15[0x30e] = plVar15[0x31e];
  plVar15[0x30f] = plVar15[799];
  lVar10 = 0;
  if (plVar15[0xe] != 0) {
    lVar10 = plVar15[0xe] + 0x278;
  }
  FUN_03ebb160(lVar10,0xc0);
  return 1;
}

