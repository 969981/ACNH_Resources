
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03581f40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined *local_80;
  undefined4 local_78;
  
  uVar4 = *(uint *)(param_1 + 0x330);
  if (0 < (int)uVar4) {
    uVar14 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x338);
      lVar7 = lVar9 + uVar14 * 0x70;
      *(undefined4 *)(lVar7 + 8) = DAT_057716f8;
      pvVar13 = *(void **)(lVar7 + 0x18);
      (**(code **)(DAT_05771700 + 0x18))(&DAT_05771700);
      pvVar12 = DAT_05771708;
      if (pvVar13 != DAT_05771708) {
        (**(code **)(DAT_05771700 + 0x18))(&DAT_05771700);
        lVar7 = 0;
        do {
          if (*(char *)((long)DAT_05771708 + lVar7) == '\0') goto LAB_03581fa8;
          if (*(char *)((long)DAT_05771708 + lVar7 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_03581fa8;
          }
          if (*(char *)((long)DAT_05771708 + lVar7 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_03581fa8;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_03581fa8:
        iVar5 = *(int *)(lVar9 + uVar14 * 0x70 + 0x20);
        iVar6 = (int)lVar7;
        if (iVar5 <= (int)lVar7) {
          iVar6 = iVar5 + -1;
        }
        memcpy(pvVar13,pvVar12,(long)iVar6);
        *(undefined1 *)((long)pvVar13 + (long)iVar6) = 0;
      }
      lVar7 = uVar14 * 0x70;
      uVar14 = uVar14 + 1;
      *(undefined1 *)(lVar9 + lVar7 + 0x68) = DAT_05771758;
    } while (uVar14 != uVar4);
    uVar4 = *(uint *)(param_1 + 0x330);
    if (0 < (int)uVar4) {
      uVar14 = 0;
      do {
        if ((long)*(int *)(param_1 + 0x358) <= (long)uVar14) break;
        iVar6 = **(int **)(*(long *)(param_1 + 0x360) + uVar14 * 8);
        local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar6);
        if (DAT_05771764 == iVar6) {
          lVar7 = 0;
LAB_03582240:
          iVar6 = (&DAT_05771760)[lVar7 * 2];
          local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar6);
          if (iVar6 == DAT_05771228) {
            lVar7 = 0;
          }
          else if (iVar6 == DAT_05771298) {
            lVar7 = 1;
          }
          else if (iVar6 == DAT_05771308) {
            lVar7 = 2;
          }
          else if (iVar6 == DAT_05771378) {
            lVar7 = 3;
          }
          else if (iVar6 == DAT_057713e8) {
            lVar7 = 4;
          }
          else if (iVar6 == DAT_05771458) {
            lVar7 = 5;
          }
          else if (iVar6 == DAT_057714c8) {
            lVar7 = 6;
          }
          else if (iVar6 == DAT_05771538) {
            lVar7 = 7;
          }
          else if (iVar6 == DAT_057715a8) {
            lVar7 = 8;
          }
          else if (iVar6 == DAT_05771618) {
            lVar7 = 9;
          }
          else {
            puVar10 = &DAT_057716f0;
            if (iVar6 != DAT_05771688) goto LAB_0358239c;
            lVar7 = 10;
          }
          puVar10 = &DAT_05771220 + lVar7 * 0xe;
        }
        else {
          if (_DAT_0577176c == iVar6) {
            lVar7 = 1;
            goto LAB_03582240;
          }
          if (_DAT_05771774 == iVar6) {
            lVar7 = 2;
            goto LAB_03582240;
          }
          if (_DAT_0577177c == iVar6) {
            lVar7 = 3;
            goto LAB_03582240;
          }
          if (_DAT_05771784 == iVar6) {
            lVar7 = 4;
            goto LAB_03582240;
          }
          if (_DAT_0577178c == iVar6) {
            lVar7 = 5;
            goto LAB_03582240;
          }
          if (_DAT_05771794 == iVar6) {
            lVar7 = 6;
            goto LAB_03582240;
          }
          if (_DAT_0577179c == iVar6) {
            lVar7 = 7;
            goto LAB_03582240;
          }
          if (_DAT_057717a4 == iVar6) {
            lVar7 = 8;
            goto LAB_03582240;
          }
          if (_DAT_057717ac == iVar6) {
            lVar7 = 9;
            goto LAB_03582240;
          }
          if (_DAT_057717b4 == iVar6) {
            lVar7 = 10;
            goto LAB_03582240;
          }
          puVar10 = &DAT_057716f0;
        }
LAB_0358239c:
        uVar3 = uVar14;
        if (*(uint *)(param_1 + 0x330) <= uVar14) {
          uVar3 = 0;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x338) + uVar3 * 0x70 + 8) =
             *(undefined4 *)(puVar10 + 1);
        plVar11 = puVar10 + 2;
        uVar3 = uVar14;
        if (*(uint *)(param_1 + 0x330) <= uVar14) {
          uVar3 = 0;
        }
        lVar7 = *(long *)(param_1 + 0x338) + uVar3 * 0x70;
        pvVar12 = *(void **)(lVar7 + 0x18);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        pvVar13 = (void *)puVar10[3];
        if (pvVar12 != pvVar13) {
          (**(code **)(puVar10[2] + 0x18))(plVar11);
          lVar9 = 0;
          do {
            if (*(char *)(puVar10[3] + lVar9) == '\0') goto LAB_03582098;
            lVar2 = puVar10[3] + lVar9;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_03582098;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_03582098;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_03582098:
          iVar5 = *(int *)(lVar7 + 0x20);
          iVar6 = (int)lVar9;
          if (iVar5 <= (int)lVar9) {
            iVar6 = iVar5 + -1;
          }
          memcpy(pvVar12,pvVar13,(long)iVar6);
          *(undefined1 *)((long)pvVar12 + (long)iVar6) = 0;
        }
        uVar3 = uVar14;
        if (*(uint *)(param_1 + 0x330) <= uVar14) {
          uVar3 = 0;
        }
        uVar14 = uVar14 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x338) + uVar3 * 0x70 + 0x68) = 1;
      } while (uVar14 != uVar4);
    }
  }
  lVar7 = FUN_033d0598(PTR_DAT_04bb32e0);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,*(int *)(lVar7 + 0x390));
  uVar4 = *(uint *)(param_1 + 0x330);
  if (0 < (int)uVar4) {
    uVar14 = 0;
    pcVar8 = (char *)(*(long *)(param_1 + 0x338) + 0x68);
    do {
      if ((*pcVar8 != '\0') && (*(int *)(pcVar8 + -0x60) == *(int *)(lVar7 + 0x390)))
      goto LAB_035824c4;
      uVar14 = uVar14 + 1;
      pcVar8 = pcVar8 + 0x70;
    } while (uVar4 != uVar14);
  }
  uVar14 = 0;
LAB_035824c4:
  FUN_03136870(param_1 + 0x218,(uint *)(param_1 + 0x330));
  FUN_03136ca0(param_1 + 0x218,param_1 + 0x1f8,uVar14 & 0xffffffff);
  puVar10 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar14 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
  if ((uVar14 & 1) == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  plVar11 = *(long **)puVar10[0x45];
  if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
    iVar6 = *(int *)(param_1 + 0x358);
    fVar16 = (float)(iVar6 + -1);
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_78 = 9;
    local_80 = puVar1;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_80);
    fVar15 = (float)(**(code **)(plVar11[3] + 0xb0))(plVar11[1]);
    local_78 = 0x14;
    if (fVar16 <= fVar15) {
      fVar15 = fVar16;
    }
    fVar16 = 0.0;
    if (0 < iVar6) {
      fVar16 = fVar15;
    }
    local_80 = puVar1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_80);
    (**(code **)(plVar11[3] + 0x158))(fVar16,plVar11[1]);
  }
  return;
}

