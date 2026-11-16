
void FUN_02930ed0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bb2720;
  puVar3 = PTR_DAT_04bb2640;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar5 = FUN_006bd550(*puVar6,0);
      lVar8 = *(long *)puVar4;
      if (iVar5 == 0x758f7eaf) {
        if (lVar8 == 0) goto LAB_0293108c;
        lVar9 = *(long *)(lVar8 + 0x330);
        if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x260) <= param_2)) goto LAB_02931010;
        uVar2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
        lVar9 = lVar9 + 0x250;
        uVar11 = uVar2 + 1;
        uVar1 = uVar11 & 3;
        if (2 < uVar2) {
          uVar11 = uVar11 & 0xfffffffc;
          do {
            uVar11 = uVar11 - 4;
            lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 8) + 8);
          } while (uVar11 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          lVar9 = *(long *)(lVar9 + 8);
        }
        if (((lVar9 != 0) && ((int *)(lVar9 + -0x40) != (int *)0x0)) &&
           (*(char *)(lVar9 + -3) != '\0')) {
          if (DAT_055c1b60 == &DAT_055c1b58) {
            puVar6 = &DAT_055c1098;
          }
          else {
            puVar10 = DAT_055c1b60;
            do {
              puVar6 = puVar10 + -8;
              if (*(int *)(puVar10 + -1) == *(int *)(lVar9 + -0x40)) goto LAB_029310c4;
              puVar10 = (undefined8 *)puVar10[1];
            } while (puVar10 != &DAT_055c1b58);
            puVar6 = &DAT_055c1098;
          }
LAB_029310c4:
          if ((*(int *)(lVar9 + -0x38) == 0) && (*(int *)(lVar9 + -0x10) < 0)) {
            FUN_02930ce0(param_1,puVar6,param_3);
            return;
          }
          FUN_02931110(param_1,puVar6,*(int *)(lVar9 + -0x10),param_3);
          return;
        }
      }
      if (lVar8 == 0) goto LAB_0293108c;
    }
LAB_02931010:
    if (*(long *)(lVar8 + 0x330) != 0) {
      plVar7 = *(long **)puVar3;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar8 + 0x338));
      iVar5 = FUN_006bd550(*puVar6,0);
      if ((iVar5 == 0x758f7eaf) && (lVar8 = *(long *)puVar4, lVar8 != 0)) {
        puVar6 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          plVar7 = *(long **)puVar3;
          puVar6 = (undefined8 *)
                   (**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar8 + 0x338));
          iVar5 = FUN_006bd550(*puVar6,0);
          puVar6 = &DAT_055cdaf8;
          if (iVar5 != 0x758f7eaf) {
            puVar6 = &DAT_055c04a0;
          }
        }
        goto LAB_02931094;
      }
    }
  }
LAB_0293108c:
  puVar6 = &DAT_055c04a0;
LAB_02931094:
  FUN_02931ca0(param_1,puVar6,param_2,param_3,1);
  return;
}

