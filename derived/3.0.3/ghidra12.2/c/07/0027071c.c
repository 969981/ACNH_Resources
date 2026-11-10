
void FUN_0027071c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *local_78;
  undefined1 auStack_70 [32];
  
  puVar1 = PTR_DAT_04bc1510;
  plVar5 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  puVar2 = PTR_DAT_04bcd350;
  if ((int)param_2[1] == 6) {
    lVar10 = plVar5[0x13];
    lVar9 = *param_2;
    uVar6 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
    iVar3 = FUN_002840d8(uVar6,lVar9,(int)param_2[1]);
    lVar8 = *(long *)(param_1 + 0x50);
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0xbb) == '\0') {
        iVar4 = FUN_002212bc(lVar8);
        if (iVar4 == 2) {
          FUN_0022726c(&local_78,param_2 + 3);
          lVar7 = (**(code **)(*plVar5 + 0x60))(plVar5,&local_78);
          if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x4c) == 5)) && (*(char *)(lVar7 + 0x38) == -3))
             && ((*(char *)(lVar9 + 1) == -3 &&
                 (*(undefined8 *)(lVar7 + 0x80) = **(undefined8 **)puVar1,
                 *(short *)(*(long *)puVar2 + 0x370) != -1)))) {
            FUN_0027b5e4(lVar8,&local_78);
            lVar9 = *(long *)puVar2;
            *(short *)(lVar9 + 0x370) = *(short *)(lVar9 + 0x370) + 1;
            *(int *)(lVar8 + 100) = iVar3;
            FUN_00276be4(*(undefined8 *)(lVar10 + 0x90),iVar3,&local_78);
            FUN_00221244(lVar8,0);
          }
          local_78 = PTR_DAT_04bcba18 + 0x10;
          FUN_0021f584(auStack_70);
          return;
        }
        if (*(char *)(lVar8 + 0xbb) == '\0') {
          return;
        }
      }
      if (*(int *)(lVar8 + 100) == iVar3) {
        FUN_00276be4(*(undefined8 *)(lVar10 + 0x90),iVar3,param_2 + 3);
        lVar8 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2 + 3);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x80) = **(undefined8 **)puVar1;
        }
      }
    }
  }
  return;
}

