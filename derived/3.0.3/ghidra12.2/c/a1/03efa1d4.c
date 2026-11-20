
long * FUN_03efa1d4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar3 = malloc(0x1f0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1f0,8);
  }
  plVar3[4] = 0;
  plVar3[0x1f] = (long)(plVar3 + 0x22);
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[0x1c] = (long)(plVar3 + 0x1f);
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar3[0x19] = (long)(plVar3 + 0x1c);
  plVar3[2] = 0;
  plVar3[0x16] = (long)(plVar3 + 0x19);
  *plVar3 = (long)&PTR_LAB_04ba7580;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[0x13] = (long)(plVar3 + 0x16);
  plVar3[6] = 0;
  plVar3[0x3a] = 0;
  plVar3[0x10] = (long)(plVar3 + 0x13);
  *(undefined1 *)(plVar3 + 0x3d) = 0;
  plVar5 = plVar3 + 0xd;
  *plVar5 = (long)(plVar3 + 0x10);
  plVar3[7] = (long)(plVar3 + 7);
  plVar3[8] = (long)(plVar3 + 7);
  plVar3[0x22] = (long)(plVar3 + 0x25);
  plVar3[0x25] = (long)(plVar3 + 0x28);
  plVar3[0x28] = (long)(plVar3 + 0x2b);
  plVar3[0x2b] = (long)(plVar3 + 0x2e);
  plVar3[0x2e] = (long)(plVar3 + 0x31);
  plVar3[0x31] = (long)(plVar3 + 0x34);
  plVar3[0x34] = (long)(plVar3 + 0x37);
  plVar3[0x37] = (long)(plVar3 + 0x3a);
  *(undefined4 *)(plVar3 + 0xc) = 0x10;
  plVar8 = plVar3 + 1;
  *plVar8 = 0;
  plVar3[10] = (long)plVar5;
  plVar3[0xb] = (long)plVar5;
  uVar4 = FUN_03efa3f0(plVar3,param_2,param_1);
  if ((uVar4 & 1) == 0) {
    pvVar7 = (void *)plVar3[4];
    if (pvVar7 != (void *)0x0) {
      lVar6 = *(long *)puVar1;
      if (lVar6 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(lVar6,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar3[4] = 0;
      *(undefined4 *)(plVar3 + 3) = 0;
    }
    pvVar7 = (void *)plVar3[6];
    if (pvVar7 != (void *)0x0) {
      lVar6 = *(long *)puVar1;
      if (lVar6 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(lVar6,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      plVar3[6] = 0;
      *(undefined4 *)(plVar3 + 5) = 0;
    }
    if (*plVar8 != 0) {
      FUN_03ef9a2c();
      *plVar8 = 0;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

