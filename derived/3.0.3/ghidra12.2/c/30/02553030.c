
bool FUN_02553030(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  byte bVar16;
  char cVar17;
  uint *puVar18;
  bool bVar19;
  long *local_58;
  char local_50;
  char local_4f;
  char local_4e;
  int local_48;
  undefined4 local_44;
  
  puVar6 = PTR_DAT_04bb3238;
  piVar15 = (int *)PTR_DAT_04bb3238;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    piVar15 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  local_48 = *piVar15;
  local_44 = param_2;
  if (local_48 == 0) {
    FUN_025515ec(param_1);
    bVar19 = true;
  }
  else {
    FUN_0071c8d0(&local_58,&local_48,&local_44,0);
    plVar8 = local_58;
    if (local_58 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar11 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
      if ((uVar11 & 1) == 0) {
        local_4f = '\0';
      }
    }
    bVar19 = ((local_58 != (long *)0x0 && local_50 != '\0') && local_4f != '\0') && local_4e != '\0'
    ;
    if (((local_58 != (long *)0x0 && local_50 != '\0') && local_4f != '\0') && local_4e != '\0') {
      local_58[0x3f8] = 0;
      *(undefined2 *)((long)local_58 + 0x1fcc) = 0x100;
      *(undefined4 *)(local_58 + 0x3f9) = 2;
      if (*param_1 < 8) {
        uVar9 = FUN_02582d8c(param_1,1);
        puVar7 = PTR_DAT_04bb4fb8;
        if ((((uVar9 < 8) &&
             (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0')) &&
           ((uVar9 = FUN_02582d8c(param_1,1), uVar9 < 8 &&
            (*(char *)(*(long *)puVar7 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')))) {
          lVar14 = *(long *)puVar7 + (ulong)uVar9 * 0x13f0;
          *(undefined4 *)(lVar14 + 0x4f8) = 0;
          *(undefined8 *)(lVar14 + 0x500) = 0;
          *(undefined8 *)(lVar14 + 0x508) = 0;
          *(undefined8 *)(lVar14 + 0x510) = 0;
          *(undefined8 *)(lVar14 + 0x518) = 0;
          *(undefined4 *)(lVar14 + 0x520) = 0;
          bVar16 = *PTR_DAT_04bb32e0;
          *(undefined8 *)(lVar14 + 0x528) = 0;
          *(undefined1 *)(lVar14 + 0x540) = 0;
          if (7 < bVar16) {
            bVar16 = 0xff;
          }
          *(byte *)(lVar14 + 0x524) = bVar16;
          puVar7 = PTR_DAT_04bb37e0;
          uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined2 *)(lVar14 + 0x544) = uVar5;
          uVar3 = puVar7[2];
          *(undefined1 *)(lVar14 + 0x546) = uVar3;
          uVar4 = puVar7[3];
          *(undefined1 *)(lVar14 + 0x547) = uVar4;
          uVar1 = *(undefined4 *)(puVar7 + 4);
          *(undefined1 *)(lVar14 + 0x558) = 0;
          *(undefined2 *)(lVar14 + 0x560) = uVar5;
          *(undefined1 *)(lVar14 + 0x562) = uVar3;
          *(undefined1 *)(lVar14 + 0x563) = uVar4;
          *(undefined1 *)(lVar14 + 0x568) = 0;
          *(undefined8 *)(lVar14 + 0x578) = 0;
          *(undefined4 *)(lVar14 + 0x580) = 0;
          *(undefined4 *)(lVar14 + 0x548) = uVar1;
          *(undefined4 *)(lVar14 + 0x564) = uVar1;
          *(undefined4 *)(lVar14 + 0x584) = *(undefined4 *)puVar6;
        }
      }
      if ((*(byte *)((long)local_58 + 0x17d2) >> 4 & 1) == 0) {
        puVar12 = (undefined8 *)local_58[0xc];
        if (puVar12 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_052461c0), iVar10 != 0)) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            puVar12 = &DAT_05240280;
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        FUN_01707f58(puVar12,6,6,0);
      }
      *(byte *)((long)local_58 + 0x18f4) = *(byte *)((long)local_58 + 0x18f4) & 0xf7;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_054f0960);
          puVar13 = (uint *)&DAT_054f0958;
          if (iVar10 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar13 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar13 = (uint *)(DAT_054f5738 + 0x204);
        if ((ulong)*param_1 < 8) {
          puVar13 = puVar13 + (ulong)*param_1 * 2;
        }
      }
      if ((((*puVar13 >> 3 & 1) == 0) && (uVar11 = FUN_02372a04(local_58), (uVar11 & 1) == 0)) &&
         (uVar11 = FUN_02546f34(param_1,local_44), (uVar11 & 1) == 0)) {
        uVar9 = 0;
        if (local_58[0xe] != 0) {
          uVar2 = *(uint *)(local_58[0xe] + 0x280);
          uVar9 = 0;
          if (uVar2 < 0x149) {
            uVar9 = uVar2;
          }
        }
        puVar13 = (uint *)FUN_0251d928(uVar9);
        puVar7 = PTR_DAT_04bc2fe8;
        puVar6 = PTR_DAT_04bc2fe0;
        if (*puVar13 != 0) {
          cVar17 = *PTR_DAT_04bc2fe0;
          do {
            if (cVar17 == '\0') {
              cVar17 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0xa0) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar9 = *(uint *)(puVar7 + 0x6c);
              if (-1 < (int)uVar9) {
                if (((char *)((ulong)uVar9 + (long)puVar13) != (char *)0x0) &&
                   (*(char *)((ulong)uVar9 + (long)puVar13) != '\0')) goto LAB_02553534;
                break;
              }
              if (uVar9 != 0xffffffff) break;
            }
            puVar18 = (uint *)(ulong)*puVar13;
            if ((*puVar13 == 0) || (puVar13 == puVar18)) break;
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar18)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + (lVar14 - (long)puVar18);
            if (lVar14 == 0) break;
            uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar18));
            *(undefined4 *)(puVar7 + 0x6c) = 0xfffffffe;
            if (uVar11 == 0) break;
            piVar15 = (int *)(lVar14 + 4);
            while (piVar15[-1] != -0x121f5736) {
              piVar15 = piVar15 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) goto LAB_02553498;
            }
            iVar10 = 0;
            if (*piVar15 != -1) {
              iVar10 = *piVar15;
            }
            *(int *)(puVar7 + 0x6c) = iVar10;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_02553498:
        puVar12 = (undefined8 *)local_58[0xc];
        if (puVar12 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar10 = __cxa_guard_acquire(&DAT_052461c0);
            puVar12 = &DAT_05240280;
            if (iVar10 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            puVar12 = &DAT_05240280;
          }
        }
        if ((*(uint *)((long)puVar12 + 0x15f4) >> 5 & 1) == 0) {
          FUN_025515ec(param_1);
          puVar13 = (uint *)FUN_0251d150(param_1);
          *puVar13 = *puVar13 | 0x10;
          FUN_025480a0(param_1,1);
          return bVar19;
        }
        puVar13 = (uint *)FUN_0251d150(param_1);
        *puVar13 = *puVar13 & 0xfdffffff;
        FUN_023736d8(local_58);
      }
LAB_02553534:
      FUN_025515ec(param_1);
    }
  }
  return bVar19;
}

