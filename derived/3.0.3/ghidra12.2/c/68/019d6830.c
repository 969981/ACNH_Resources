
uint FUN_019d6830(float param_1,long param_2,uint *param_3,long param_4,int *param_5,float *param_6)

{
  undefined4 *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  byte bVar15;
  uint uVar16;
  undefined8 local_80;
  float local_78;
  
  uVar3 = 0;
  if (((param_3 == (uint *)0x0) || (uVar3 = 0, param_4 == 0)) ||
     (uVar3 = 0, *(long *)(param_2 + 0x960) == 0)) goto LAB_019d6d68;
  uVar3 = *(uint *)(param_2 + 0x958);
  if (0 < (int)uVar3) {
    uVar10 = (ulong)uVar3 & 3;
    uVar11 = 0;
    if (3 < uVar3) {
      do {
        lVar12 = uVar11 * 8;
        uVar11 = uVar11 + 4;
        *(undefined8 *)(*(long *)(param_2 + 0x960) + lVar12) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_2 + 0x960) + lVar12 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_2 + 0x960) + lVar12 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_2 + 0x960) + lVar12 + 0x18) = 0xffffffffffffffff;
      } while (((ulong)uVar3 & 0xfffffffc) != uVar11);
    }
    if ((uVar3 & 3) != 0) {
      lVar12 = uVar11 << 3;
      do {
        uVar10 = uVar10 - 1;
        *(undefined8 *)(*(long *)(param_2 + 0x960) + lVar12) = 0xffffffffffffffff;
        lVar12 = lVar12 + 8;
      } while (uVar10 != 0);
    }
  }
  puVar2 = PTR_DAT_04bb3238;
  if (0 < *(int *)(param_2 + 0x538)) {
    uVar11 = 0;
    bVar15 = 0;
    do {
      if (uVar11 < *(uint *)(param_2 + 0x518)) {
        lVar12 = *(long *)(*(long *)(param_2 + 0x520) + uVar11 * 8);
      }
      else {
        lVar12 = 0;
      }
      if ((*(int *)(**(long **)(**(long **)(lVar12 + 0x38) + 0x60) + 200) == *(int *)puVar2) &&
         (piVar5 = (int *)(**(code **)(*(long *)(lVar12 + 0x390) + 0xf0))(lVar12 + 0x390),
         *piVar5 == *param_5)) {
        piVar5 = (int *)(**(code **)(*(long *)(lVar12 + 0x40) + 0xf0))();
        iVar4 = *piVar5;
        if ((iVar4 == 0) || (iVar4 == 1)) {
          local_78 = 0.0;
          local_80 = 0;
          if (*(int *)(**(long **)(lVar12 + 0x38) + 0x58) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = **(long **)(**(long **)(lVar12 + 0x38) + 0x60);
          }
          pcVar6 = (char *)(**(code **)(*(long *)(lVar13 + 0x30) + 0xf0))();
          if (*pcVar6 == '\0') {
LAB_019d6b54:
            puVar8 = (undefined8 *)
                     (**(code **)(*(long *)(lVar13 + 0x90) + 0xf0))((long *)(lVar13 + 0x90));
            local_78 = *(float *)(puVar8 + 1);
            local_80 = *puVar8;
          }
          else {
            plVar14 = (long *)(lVar13 + 0x60);
            puVar7 = (uint *)(**(code **)(*plVar14 + 0xf0))(plVar14);
            if (((0x3f < *puVar7) || (DAT_05292338 == 0)) ||
               (*(char *)(DAT_05292338 + (ulong)*puVar7 * 0x14 + 0xc) == '\0')) goto LAB_019d6b54;
            puVar7 = (uint *)(**(code **)(*plVar14 + 0xf0))(plVar14);
            uVar3 = *puVar7;
            if (((uVar3 < 0x40) && (DAT_05292338 != 0)) &&
               (*(char *)(DAT_05292338 + 0xc + (ulong)uVar3 * 0x14) != '\0')) {
              lVar13 = DAT_05292338 + 0xc + (ulong)uVar3 * 0x14;
              local_80 = *(undefined8 *)(lVar13 + 4);
              local_78 = *(float *)(lVar13 + 0xc);
            }
          }
          uVar10 = FUN_01906898(param_4,&local_80);
          if (((uVar10 & 1) != 0) &&
             (SQRT((param_6[2] - local_78) * (param_6[2] - local_78) +
                   (*param_6 - (float)local_80) * (*param_6 - (float)local_80)) <= param_1)) {
            uVar3 = (uint)bVar15;
            bVar15 = bVar15 + 1;
            if (*(uint *)(param_2 + 0x958) <= uVar3) {
              uVar3 = 0;
            }
            puVar1 = (undefined4 *)(*(long *)(param_2 + 0x960) + (ulong)uVar3 * 8);
            *puVar1 = (int)uVar11;
            puVar1[1] = 0xffffffff;
          }
          if ((iVar4 == 0) &&
             (lVar13 = *(long *)(lVar12 + 0x38), **(char **)(lVar13 + 0x38) != '\0')) {
            iVar4 = 0;
            while( true ) {
              iVar9 = 0;
              if (*(long *)(lVar13 + 0x40) != 0) {
                iVar9 = *(int *)(*(long *)(lVar13 + 0x40) + 0x78);
              }
              if (iVar9 <= iVar4) break;
              local_78 = 0.0;
              local_80 = 0;
              FUN_0190794c(lVar12,&local_80,iVar4);
              uVar10 = FUN_01906898(param_4,&local_80);
              if (((uVar10 & 1) != 0) &&
                 (SQRT((param_6[2] - local_78) * (param_6[2] - local_78) +
                       (*param_6 - (float)local_80) * (*param_6 - (float)local_80)) <= param_1)) {
                uVar3 = (uint)bVar15;
                bVar15 = bVar15 + 1;
                if (*(uint *)(param_2 + 0x958) <= uVar3) {
                  uVar3 = 0;
                }
                puVar1 = (undefined4 *)(*(long *)(param_2 + 0x960) + (ulong)uVar3 * 8);
                *puVar1 = (int)uVar11;
                puVar1[1] = iVar4;
              }
              lVar13 = *(long *)(lVar12 + 0x38);
              iVar4 = iVar4 + 1;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x538));
    if (bVar15 != 0) {
      puVar7 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar3 = *puVar7 ^ *puVar7 << 0xb;
      uVar16 = puVar7[3];
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar3 = uVar3 >> 8 ^ uVar16 >> 0x13 ^ uVar3 ^ uVar16;
      puVar7[2] = uVar16;
      puVar7[3] = uVar3;
      uVar10 = (ulong)bVar15 * (ulong)uVar3;
      uVar11 = uVar10 >> 0x20;
      if (*(uint *)(param_2 + 0x958) <= (uint)(uVar10 >> 0x20)) {
        uVar11 = 0;
      }
      puVar7 = (uint *)(*(long *)(param_2 + 0x960) + uVar11 * 8);
      uVar3 = *puVar7;
      if (uVar3 != 0xffffffff) {
        if (uVar3 < *(uint *)(param_2 + 0x518)) {
          plVar14 = *(long **)(*(long *)(param_2 + 0x520) + (long)(int)uVar3 * 8);
        }
        else {
          plVar14 = (long *)0x0;
        }
        uVar3 = (**(code **)(*plVar14 + 0x170))(plVar14);
        if ((uVar3 & 1) == 0) {
          if (puVar7[1] == 0xffffffff) {
            FUN_019075e8(plVar14,param_3 + 3);
          }
          else {
            FUN_0190794c();
          }
          *param_3 = *puVar7;
          puVar7 = (uint *)(**(code **)(plVar14[0x72] + 0xf0))(plVar14 + 0x72);
          param_3[1] = *puVar7;
          puVar7 = (uint *)(**(code **)(plVar14[8] + 0xf0))();
          param_3[2] = *puVar7;
          iVar4 = (**(code **)(*plVar14 + 0x158))(plVar14);
          if (iVar4 == 2) {
            lVar12 = *(long *)(plVar14[7] + 0x10);
            if (*(int *)(lVar12 + 0x58) != 0) goto LAB_019d6d0c;
LAB_019d6d28:
            lVar12 = 0;
LAB_019d6d2c:
            puVar7 = (uint *)(**(code **)(*(long *)(lVar12 + 0x38) + 0xf0))();
            uVar16 = *puVar7;
          }
          else {
            uVar16 = 0;
            if (iVar4 == 1) {
              lVar12 = *(long *)(plVar14[7] + 8);
              if (*(int *)(lVar12 + 0x58) == 0) goto LAB_019d6d28;
LAB_019d6d0c:
              lVar12 = **(long **)(lVar12 + 0x60);
              goto LAB_019d6d2c;
            }
          }
          param_3[6] = uVar16;
        }
        uVar3 = uVar3 ^ 1;
        goto LAB_019d6d68;
      }
    }
  }
  uVar3 = 0;
LAB_019d6d68:
  return uVar3 & 1;
}

