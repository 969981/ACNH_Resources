
long * FUN_03efddc0(undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar6 = malloc(0xf8);
  }
  else {
    plVar6 = param_4;
    if (param_4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_03efde4c;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0xf8,8);
  }
LAB_03efde4c:
  *plVar6 = (long)&PTR_LAB_04ba78b0;
  plVar6[1] = param_2;
  *(undefined4 *)(plVar6 + 2) = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 4) = 0;
  lVar2 = DAT_0419b50c;
  lVar5 = DAT_0419b504;
  lVar8 = DAT_0419b4fc;
  lVar1 = DAT_0419b4f4;
  *(undefined4 *)(plVar6 + 0xb) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[0x18] = 0;
  *(undefined4 *)(plVar6 + 0x19) = 0;
  plVar6[0x16] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0x10] = lVar8;
  plVar6[0x11] = lVar5;
  lVar5 = DAT_0419b4ec;
  lVar8 = DAT_0419b4e4;
  plVar6[0x12] = lVar2;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = lVar8;
  plVar6[0xe] = lVar5;
  plVar6[0xf] = lVar1;
  uVar4 = DAT_0419b58c;
  uVar3 = DAT_0419b584;
  *(undefined4 *)(plVar6 + 0x17) = 0;
  plVar6[0x1b] = 0;
  *(undefined4 *)(plVar6 + 0x1c) = 0;
  *(undefined8 *)((long)plVar6 + 0xcc) = uVar3;
  *(undefined4 *)((long)plVar6 + 0xd4) = uVar4;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  uVar7 = FUN_03efdf30(plVar6,param_3,param_1,param_4);
  if ((uVar7 & 1) == 0) {
    FUN_03efee90(plVar6);
    (**(code **)(*plVar6 + 8))(plVar6);
    plVar6 = (long *)0x0;
  }
  return plVar6;
}

