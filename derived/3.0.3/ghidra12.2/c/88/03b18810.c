
void FUN_03b18810(long param_1,ulong param_2,int param_3,ulong param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  long *plVar6;
  uint *puVar7;
  undefined1 uVar8;
  code *pcVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  char local_b0 [64];
  
  lVar12 = *(long *)(param_1 + 0x60);
  plVar6 = *(long **)(param_1 + 0x68);
  if (lVar12 == 0 || plVar6 != (long *)0x0) {
    bVar3 = false;
    if ((param_2 & 1) != 0) goto LAB_03b18874;
LAB_03b18870:
    if ((param_4 & 1) != 0) goto LAB_03b18874;
  }
  else {
    bVar3 = *(float *)(lVar12 + 0x50) < 0.0;
    if ((param_2 & 1) == 0) goto LAB_03b18870;
LAB_03b18874:
    if (lVar12 == 0) {
      if (plVar6 != (long *)0x0) {
        pcVar9 = *(code **)(*plVar6 + 0xe0);
LAB_03b188bc:
        (*pcVar9)(plVar6);
      }
      uVar8 = 2;
    }
    else {
      if (plVar6 != (long *)0x0) {
        FUN_0035d98c(plVar6,0);
        *(undefined4 *)(plVar6 + 10) = 0;
      }
      if (param_3 == 2) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0xe0))();
        uVar8 = 0;
      }
      else {
        if (param_3 == 1) {
          plVar6 = *(long **)(param_1 + 0x60);
          pcVar9 = *(code **)(*plVar6 + 0xe8);
          goto LAB_03b188bc;
        }
        lVar12 = **(long **)(param_1 + 0x60);
        if (bVar3) {
          (**(code **)(lVar12 + 200))(0x3f800000,*(long **)(param_1 + 0x60),0);
          plVar6 = *(long **)(param_1 + 0x88);
        }
        else {
          (**(code **)(lVar12 + 0xc0))(0x3f800000);
          plVar6 = *(long **)(param_1 + 0x88);
        }
        if ((((plVar6 != (long *)0x0) && (plVar6[0x1a] != 0)) && (*(long *)(param_1 + 0x90) != 0))
           && (*(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x18) + 0x18) == 0)) {
          local_b0[0] = '\0';
          pcVar1 = (char *)(*(long *)(param_1 + 0x18) + 0xb0);
          if (local_b0 == pcVar1) {
            uVar13 = 0;
            uVar16 = 5;
LAB_03b189d0:
            memcpy(local_b0 + uVar13,"_open",(ulong)uVar16);
            local_b0[uVar16 + uVar13] = '\0';
          }
          else {
            uVar15 = 0xffffffff;
            pcVar10 = pcVar1;
            do {
              cVar2 = *pcVar10;
              uVar15 = uVar15 + 1;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            if ((int)uVar15 < 1) {
              uVar13 = 0;
              local_b0[0] = '\0';
              uVar16 = 5;
              goto LAB_03b189d0;
            }
            uVar16 = uVar15;
            if (0x3e < (int)uVar15) {
              uVar16 = 0x3f;
            }
            uVar13 = (ulong)uVar16;
            memcpy(local_b0,pcVar1,uVar13);
            local_b0[uVar13] = '\0';
            if (uVar16 < 0x3b) {
              uVar16 = 5;
              goto LAB_03b189d0;
            }
            if ((int)uVar15 < 0x3f) {
              uVar16 = 0x3f - uVar16;
              goto LAB_03b189d0;
            }
          }
          (**(code **)(*plVar6 + 0x250))(plVar6,local_b0);
        }
        uVar8 = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x99) = uVar8;
  }
  if ((bVar3) ||
     (((*(long *)(param_1 + 0x60) != 0 && ((param_4 & 1) == 0)) && ((param_2 & 1) == 0))))
  goto LAB_03b18ba4;
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 == (long *)0x0) {
LAB_03b18a50:
    lVar12 = *(long *)(param_1 + 0x80);
  }
  else {
    if ((*(byte *)(param_1 + 0x98) >> 1 & 1) == 0) {
      (**(code **)(*plVar6 + 0xc0))(0x3f800000,plVar6);
      goto LAB_03b18a50;
    }
    uVar13 = FUN_0035d97c(plVar6);
    puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar15 = puVar7[3];
    uVar16 = *puVar7 ^ *puVar7 << 0xb;
    *puVar7 = puVar7[1];
    puVar7[1] = puVar7[2];
    uVar16 = uVar16 >> 8 ^ uVar15 >> 0x13 ^ uVar16 ^ uVar15;
    puVar7[2] = uVar15;
    puVar7[3] = uVar16;
    *(float *)(plVar6 + 4) = (float)((ulong)uVar16 + (uVar13 & 0xffff) * (ulong)uVar16 >> 0x20);
    (**(code **)(*plVar6 + 200))(0x3f800000,plVar6,1);
    lVar12 = *(long *)(param_1 + 0x80);
  }
  if ((lVar12 != 0) &&
     (lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 0x20) + 0x400), lVar11 != 0)) {
    fVar18 = 1.0;
    uVar16 = *(uint *)(*(long *)(lVar12 + 0x60) + 0x14);
    if (uVar16 != 0) {
      puVar7 = (uint *)(*(long *)(lVar12 + 0x60) + (ulong)uVar16);
      uVar13 = (ulong)(ushort)puVar7[2];
      if (uVar13 != 0) {
        do {
          puVar14 = puVar7 + 3;
          pcVar1 = (char *)0x0;
          if (*puVar14 != 0) {
            pcVar1 = (char *)((long)puVar14 + (ulong)*puVar14);
          }
          iVar5 = strcmp("BeatCount",pcVar1);
          if (iVar5 == 0) {
            fVar18 = (float)*(int *)((long)puVar14 + (ulong)puVar7[4]);
            break;
          }
          uVar13 = uVar13 - 1;
          puVar7 = puVar14;
        } while (uVar13 != 0);
      }
    }
    uVar4 = FUN_0035d97c(lVar12);
    plVar6 = *(long **)(param_1 + 0x80);
    fVar17 = *(float *)(lVar11 + 0x10);
    *(float *)(plVar6 + 4) = ((float)uVar4 / fVar18) * *(float *)(lVar11 + 0x14);
    (**(code **)(*plVar6 + 200))(fVar17 * ((float)uVar4 / fVar18),plVar6,1);
  }
  if ((*(long **)(param_1 + 0x78) != (long *)0x0) && (*(char *)(param_1 + 0x99) == '\x02')) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xc0))(0x3f800000);
  }
LAB_03b18ba4:
  lVar12 = param_1 + 0x48;
  lVar11 = *(long *)(param_1 + 0x50);
  if (lVar11 != lVar12) {
    if ((param_2 & 1) == 0) {
      do {
        if (*(char *)(*(long *)(lVar11 + 0x10) + 0x99) != '\0') {
          FUN_03b18810(*(long *)(lVar11 + 0x10),0,param_3,0);
        }
        lVar11 = *(long *)(lVar11 + 8);
      } while (lVar11 != lVar12);
    }
    else {
      do {
        FUN_03b18810(*(undefined8 *)(lVar11 + 0x10),1,param_3,0);
        lVar11 = *(long *)(lVar11 + 8);
      } while (lVar11 != lVar12);
    }
  }
  return;
}

