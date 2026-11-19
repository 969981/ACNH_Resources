
void FUN_0388de70(long param_1,ulong param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 local_80;
  ulong uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04bcb7d8;
  if (*(int *)(param_1 + 8) != 0) {
    plVar11 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
    uVar10 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x90) + 0xc0);
    do {
      plVar12 = *(long **)(param_1 + 0x10);
LAB_0388df04:
      plVar4 = (long *)*plVar12;
      if ((char)plVar4[3] == '\0') {
        uVar5 = (**(code **)(*plVar4 + 8))();
        plVar4 = (long *)*plVar12;
        if (((uVar5 & 1) == 0) || ((int)plVar4[1] != 3)) goto LAB_0388df54;
        uVar3 = FUN_03894040(uVar10,plVar4 + 2);
        uVar3 = uVar3 ^ 1;
        plVar4 = (long *)*plVar12;
        if ((char)plVar4[3] != '\0') goto LAB_0388df60;
        bVar2 = 0;
LAB_0388dfb8:
        if ((uVar3 & 1) != 0) goto LAB_0388dec4;
        if ((bVar2 & 1) != 0) {
LAB_0388e014:
          puVar13 = (undefined8 *)*plVar12;
          uStack_68 = puVar13[3];
          plVar12 = *(long **)(*(long *)puVar1 + 0x68);
          uVar14 = *(undefined8 *)(*(long *)puVar1 + 0x90);
          plVar4 = puVar13 + 2;
          local_70 = *plVar4;
          (**(code **)(*plVar12 + 0x1f0))(plVar12,&local_70);
          if ((*(char *)(puVar13 + 3) == '\0') && (iVar8 = *(int *)(param_1 + 8), iVar8 != 0)) {
            plVar9 = *(long **)(param_1 + 0x10);
            plVar12 = plVar9;
            do {
              puVar6 = (undefined8 *)*plVar12;
              if ((local_70 == puVar6[2] && uStack_68._1_1_ == *(char *)((long)puVar6 + 0x19)) &&
                 (*(char *)(puVar6 + 3) != '\0')) {
                if (local_70 != 0) {
                  FUN_038987c0(uVar14,puVar6 + 2,1);
                  puVar6 = (undefined8 *)*plVar12;
                }
                (**(code **)*puVar6)();
                plVar9 = *(long **)(param_1 + 0x10);
                iVar8 = *(int *)(param_1 + 8);
              }
              plVar12 = plVar12 + 1;
            } while (plVar12 != plVar9 + iVar8);
          }
          if (*plVar4 != 0) {
            FUN_038987c0(uVar14,plVar4,1);
          }
          (**(code **)*puVar13)(puVar13);
          goto LAB_0388e074;
        }
        if (((param_2 & 1) == 0) || (lVar7 = *plVar12, *(int *)(lVar7 + 8) != 3)) goto LAB_0388deec;
        goto LAB_0388e008;
      }
LAB_0388df54:
      uVar3 = 0;
      bVar2 = 0;
      if ((char)plVar4[3] == '\0') goto LAB_0388dfb8;
LAB_0388df60:
      if ((int)plVar4[1] != 3) {
        bVar2 = 0;
        goto LAB_0388dfb8;
      }
      local_70 = plVar4[2];
      uStack_68 = plVar4[3] & 0xffffffffffffff00;
      uVar5 = FUN_03894040(uVar10,&local_70);
      if ((uVar5 & 1) == 0) {
        local_80 = *(undefined8 *)(*plVar12 + 0x10);
        uStack_78 = *(ulong *)(*plVar12 + 0x18) & 0xffffffffffffff00;
        bVar2 = (**(code **)(*plVar11 + 0x100))(plVar11,&local_80);
        bVar2 = bVar2 ^ 1;
        goto LAB_0388dfb8;
      }
      if ((uVar3 & 1) == 0) goto LAB_0388e014;
LAB_0388dec4:
      if (*(char *)(param_1 + 0x1b8) != '\0') {
        local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(*plVar12 + 0x21));
        uVar5 = FUN_038930b0(uVar10,&local_70,*plVar12 + 0x10);
        if ((uVar5 & 1) == 0) goto LAB_0388e004;
LAB_0388deec:
        plVar12 = plVar12 + 1;
        if (plVar12 == (long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8)) {
          return;
        }
        goto LAB_0388df04;
      }
      local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(*plVar12 + 0x21));
      uVar5 = FUN_038930b0(uVar10,&local_70,*plVar12 + 0x10);
      if (((uVar5 & 1) != 0) && ((param_2 & 1) == 0)) goto LAB_0388deec;
LAB_0388e004:
      lVar7 = *plVar12;
LAB_0388e008:
      FUN_0388e130(param_1,lVar7);
LAB_0388e074:
      FUN_0388d4f0(param_1);
    } while (*(int *)(param_1 + 8) != 0);
  }
  return;
}

