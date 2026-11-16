
void FUN_027f3760(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined2 uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  char cVar17;
  
  *(undefined8 *)(param_1 + 3) = 0;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  uVar10 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 6) = 0;
  uVar3 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar10 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar10 = uVar10 >> 8 ^ uVar4 >> 0x13 ^ uVar10 ^ uVar4;
  *(short *)(param_1 + 5) = (short)(uVar10 >> 0x10);
  uVar13 = (ulong)(uVar3 >> 8 ^ uVar10 >> 0x13 ^ uVar3 ^ uVar10) * 0x1b;
  *(char *)((long)param_1 + 0x16) = (char)(uVar13 >> 0x20);
  lVar14 = (ulong)((uVar10 >> 0x10) + 0x7f1cd4ef) << (uVar13 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar14 >> 0x20) + (int)lVar14;
  param_1[4] = iVar1;
  *(char *)((long)param_1 + 0x17) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  uVar10 = nn::os::GetSystemTick();
  uVar3 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  uVar10 = uVar3 ^ uVar3 * 0x800;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar10 = uVar10 >> 8 ^ uVar4 >> 0x13 ^ uVar10 ^ uVar4;
  *(short *)(param_1 + 7) = (short)(uVar10 >> 0x10);
  uVar13 = (ulong)(uVar3 >> 8 ^ uVar10 >> 0x13 ^ uVar3 ^ uVar10) * 0x1b;
  *(char *)((long)param_1 + 0x1e) = (char)(uVar13 >> 0x20);
  lVar14 = (ulong)((uVar10 >> 0x10) + 0x7f1cd4ef) << (uVar13 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar14 >> 0x20) + (int)lVar14;
  param_1[6] = iVar1;
  *(char *)((long)param_1 + 0x1f) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  memset(param_1 + 8,0,0x289d8);
  FUN_027f85cc(param_1 + 0x48);
  FUN_027f85cc(param_1 + 0x1b51);
  FUN_027f85cc(param_1 + 0x365a);
  FUN_027f85cc(param_1 + 0x5163);
  FUN_027f85cc(param_1 + 0x6c6c);
  FUN_027f85cc(param_1 + 0x8775);
  *(undefined2 *)(param_1 + 0xa27e) = 0;
  puVar6 = PTR_DAT_04bb37e0;
  *(undefined2 *)(param_1 + 0xa27f) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 0x289fe) = puVar6[2];
  *(undefined *)((long)param_1 + 0x289ff) = puVar6[3];
  uVar2 = *(undefined4 *)(puVar6 + 4);
  *(undefined1 *)(param_1 + 0xa281) = 0;
  param_1[0xa280] = uVar2;
  uVar2 = DAT_05599b34;
  uVar9 = DAT_05599b30._3_1_;
  uVar8 = DAT_05599b30._2_1_;
  uVar11 = (undefined2)DAT_05599b30;
  param_1[0xa283] = DAT_05599b34;
  param_1[0xa285] = uVar2;
  *(undefined2 *)(param_1 + 0xa282) = uVar11;
  *(undefined2 *)(param_1 + 0xa284) = uVar11;
  *(undefined1 *)((long)param_1 + 0x28a0a) = uVar8;
  *(undefined1 *)((long)param_1 + 0x28a0b) = uVar9;
  *(undefined1 *)((long)param_1 + 0x28a12) = uVar8;
  *(undefined1 *)((long)param_1 + 0x28a13) = uVar9;
  *(undefined1 *)((long)param_1 + 0x28a25) = 0x1e;
  *(undefined8 *)((long)param_1 + 0x28a1d) = 0;
  *(undefined8 *)(param_1 + 0xa286) = 0;
  puVar7 = PTR_DAT_04bc4628;
  puVar6 = PTR_DAT_04bc4620;
  lVar14 = *(long *)PTR_DAT_04bb5008;
  lVar16 = 3 - (ulong)*(ushort *)(lVar14 + 0x7f0);
  if (((uint)lVar16 < *(uint *)(lVar14 + 2000)) &&
     (puVar15 = *(uint **)(*(long *)(lVar14 + 0x7d8) + lVar16 * 8), puVar15 != (uint *)0x0)) {
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *PTR_DAT_04bc4620;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x10);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3adc;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3adc;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3adc;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != -0x278d8283) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3ad8;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0x10) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3ad8:
    uVar11 = 0;
LAB_027f3adc:
    *(undefined2 *)(param_1 + 1) = uVar11;
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *puVar6;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3bbc;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3bbc;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3bbc;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != 0x966fbe3) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3bb8;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3bb8:
    uVar11 = 0;
LAB_027f3bbc:
    *(undefined2 *)((long)param_1 + 6) = uVar11;
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *puVar6;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3c9c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3c9c;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3c9c;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != -0x37919f2b) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3c98;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 8) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3c98:
    uVar11 = 0;
LAB_027f3c9c:
    *(undefined2 *)(param_1 + 2) = uVar11;
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *puVar6;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x10);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3d7c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3d7c;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3d7c;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != -0x278d8283) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3d78;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0x10) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3d78:
    uVar11 = 0;
LAB_027f3d7c:
    *(undefined2 *)((long)param_1 + 10) = uVar11;
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *puVar6;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3e5c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3e5c;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3e5c;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != 0x966fbe3) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3e58;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3e58:
    uVar11 = 0;
LAB_027f3e5c:
    *(undefined2 *)(param_1 + 3) = uVar11;
    uVar10 = *puVar15;
    if (uVar10 != 0) {
      cVar17 = *puVar6;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar10 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar15) != (undefined2 *)0x0) {
              uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar15);
              goto LAB_027f3f3c;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar10;
        uVar11 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar11 = 0, puVar15 == puVar5)) goto LAB_027f3f3c;
        lVar14 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar5)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar15 + (lVar14 - (long)puVar5);
        uVar11 = 0;
        if (lVar14 == 0) goto LAB_027f3f3c;
        uVar13 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar12 = (int *)(lVar14 + 4);
        while (piVar12[-1] != -0x37919f2b) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027f3f38;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 8) = iVar1;
        uVar10 = *puVar15;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_027f3f38:
    uVar11 = 0;
LAB_027f3f3c:
    *(undefined2 *)((long)param_1 + 0xe) = uVar11;
  }
  *(undefined1 *)(param_1 + 0xa281) = 0;
  *(undefined1 *)((long)param_1 + 0x28a25) = 0x1e;
  *(undefined2 *)(param_1 + 0xa27e) = 0xffff;
  *(undefined8 *)(param_1 + 0xa286) = 0;
  *(undefined8 *)((long)param_1 + 0x28a1d) = 0;
  return;
}

