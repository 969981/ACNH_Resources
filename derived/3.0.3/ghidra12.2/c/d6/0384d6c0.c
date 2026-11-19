
void FUN_0384d6c0(int *param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined1 *__src;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  char cVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *__dest;
  char *pcVar21;
  undefined8 *puVar22;
  long lVar23;
  int iVar24;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7a0);
  uVar8 = *(uint *)(lVar12 + 0x1c0);
  if ((int)uVar8 < 1) {
    uVar8 = 0;
    if (*(long *)(lVar12 + 0xb0) != 0) {
      puVar9 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8);
      uVar8 = 0;
      if (puVar9 != (uint *)0x0) {
        uVar8 = *puVar9;
      }
    }
  }
  iVar13 = *param_1;
  if (iVar13 != 0) {
    lVar23 = *(long *)(param_1 + 2);
    iVar24 = 0;
    do {
      puVar18 = (undefined8 *)(lVar23 + (long)iVar24 * 0x18);
      lVar20 = *(long *)puVar3;
      puVar17 = (undefined8 *)*puVar18;
      if (lVar20 == 0) {
        pvVar7 = malloc(0x78);
      }
      else {
        plVar6 = param_2;
        if (param_2 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar20 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            pvVar7 = (void *)0x0;
            goto LAB_0384d7ac;
          }
        }
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x78,8);
      }
LAB_0384d7ac:
      (**(code **)(puVar18[1] + 0x18))(puVar18 + 1);
      FUN_03be6580(pvVar7,puVar18[2],0x1e,param_2,0);
      iVar24 = iVar24 + 1;
      *puVar17 = pvVar7;
    } while (iVar13 != iVar24);
  }
  if (uVar8 != 0) {
    uVar16 = 0;
    uVar10 = *(undefined8 *)PTR_DAT_04bb46c8;
    do {
      puVar3 = PTR_DAT_04bc4370;
      uVar15 = (uint)uVar16;
      if ((int)*(uint *)(lVar12 + 0x1c0) < 1) {
        puVar9 = (uint *)0x0;
        if ((*(long *)(lVar12 + 0xb0) != 0) &&
           (puVar9 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar9 != (uint *)0x0)) {
          if (((uVar15 < *(uint *)(lVar12 + 200)) &&
              (*(char *)(*(long *)(lVar12 + 0xd0) + (long)(int)uVar15) == '\0')) ||
             (((*puVar9 <= uVar15 || (puVar9[1] == 0)) || ((ushort)puVar9[2] == 0))))
          goto LAB_0384d900;
          iVar13 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar9 = (uint *)((ulong)(puVar9[1] * uVar15 + (uint)(ushort)puVar9[2] * 8 + iVar13) +
                           (long)puVar9);
        }
      }
      else if (uVar15 < *(uint *)(lVar12 + 0x1c0)) {
        uVar19 = uVar16;
        if (*(uint *)(lVar12 + 0x1b0) <= uVar15) {
          uVar19 = 0;
        }
        puVar9 = *(uint **)(*(long *)(lVar12 + 0x1b8) + uVar19 * 8);
      }
      else {
LAB_0384d900:
        puVar9 = (uint *)0x0;
      }
      uVar15 = *puVar9;
      if (uVar15 != 0) {
        cVar11 = DAT_055f6874;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *PTR_DAT_04bc4368 = 1;
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            uVar15 = *puVar9;
          }
          else {
            uVar1 = *(uint *)puVar3;
            if (-1 < (int)uVar1) {
              if ((ushort *)((ulong)uVar1 + (long)puVar9) != (ushort *)0x0) {
                local_64 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar9);
                goto LAB_0384d9f4;
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
          }
          puVar2 = (uint *)(ulong)uVar15;
          local_64 = 0;
          if ((puVar2 == (uint *)0x0) || (local_64 = 0, puVar9 == puVar2)) goto LAB_0384d9f4;
          lVar23 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar2)) != '\0') {
            lVar23 = 0x1c;
          }
          lVar23 = (long)puVar9 + (lVar23 - (long)puVar2);
          if (lVar23 == 0) break;
          uVar19 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar2));
          *(undefined4 *)puVar3 = 0xfffffffe;
          if (uVar19 == 0) break;
          piVar14 = (int *)(lVar23 + 4);
          while (piVar14[-1] != 0x5e7a33b5) {
            piVar14 = piVar14 + 2;
            uVar19 = uVar19 - 1;
            if (uVar19 == 0) goto LAB_0384d9f0;
          }
          iVar13 = 0;
          if (*piVar14 != -1) {
            iVar13 = *piVar14;
          }
          *(int *)puVar3 = iVar13;
          uVar15 = *puVar9;
          if (uVar15 == 0) break;
        } while( true );
      }
LAB_0384d9f0:
      local_64 = 0;
LAB_0384d9f4:
      puVar17 = &DAT_05ae3dd8 + uVar16 * 10;
      if (0x1d < uVar16) {
        puVar17 = &DAT_05ae3dd8;
      }
      __src = (undefined1 *)FUN_00981840(uVar10,local_64);
      __dest = (undefined1 *)*puVar17;
      if (__dest != __src) {
        lVar23 = 0;
        do {
          pcVar21 = __src + lVar23;
          lVar23 = lVar23 + 1;
        } while (*pcVar21 != '\0');
        uVar15 = (int)lVar23 - 1;
        if (*(int *)((long)puVar17 + 0xc) <= (int)uVar15) {
          uVar15 = *(int *)((long)puVar17 + 0xc) - 1;
        }
        if ((int)uVar15 < 1) {
          uVar15 = 0;
        }
        else {
          memcpy(__dest,__src,(ulong)uVar15);
          __dest = __dest + uVar15;
        }
        *__dest = 0;
        *(uint *)(puVar17 + 1) = uVar15;
      }
      iVar13 = *param_1;
      if (iVar13 != 0) {
        iVar24 = 0;
        lVar23 = *(long *)(param_1 + 2);
        do {
          pcVar21 = (char *)*puVar17;
          lVar20 = **(long **)(lVar23 + (long)iVar24 * 0x18);
          uVar15 = *(uint *)(lVar20 + 0x68);
          uVar19 = (ulong)uVar15;
          puVar22 = *(undefined8 **)(lVar20 + 0x70);
          puVar18 = puVar22;
          if (0 < (int)uVar15) {
            do {
              iVar4 = strcmp((char *)*puVar18,pcVar21);
              if (iVar4 == 0) goto LAB_0384dac0;
              uVar19 = uVar19 - 1;
              puVar18 = puVar18 + 2;
            } while (uVar19 != 0);
          }
          puVar22[(long)(int)uVar15 * 2] = pcVar21;
          *(uint *)(*(long *)(lVar20 + 0x70) + (long)*(int *)(lVar20 + 0x68) * 0x10 + 8) = local_64;
          *(int *)(lVar20 + 0x68) = *(int *)(lVar20 + 0x68) + 1;
LAB_0384dac0:
          iVar24 = iVar24 + 1;
        } while (iVar13 != iVar24);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar8);
  }
  return;
}

