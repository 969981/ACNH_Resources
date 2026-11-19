
void FUN_03b35e0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  FUN_0037bb50();
  *param_1 = (long)(PTR_DAT_04bd0890 + 0x10);
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN_0037ca20(param_1,param_2,0,0,0);
  *param_1 = (long)(PTR_DAT_04bd08b0 + 0x10);
  FUN_00398cf0(param_1,param_2,uVar7,0,0);
  *param_1 = (long)&PTR_FUN_04b75c08;
  param_1[0x28] = -1;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)&PTR_LAB_04b17408;
  lVar3 = DAT_05ae7600;
  plVar2 = DAT_04c62f60;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x160);
  }
  else {
    plVar5 = DAT_04c62f60;
    if (DAT_04c62f60 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      plVar6 = (long *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_03b35f2c;
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x160,8);
  }
LAB_03b35f2c:
  puVar1 = PTR_DAT_04bd1c50;
  plVar6[4] = 0;
  plVar6[5] = (long)&DAT_3f8000003f800000;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = 0;
  plVar6[0xe] = 0;
  *(undefined4 *)(plVar6 + 0x1a) = 0xffffffff;
  plVar6[0x21] = 0;
  plVar6[0x22] = (long)"agl::TextureData";
  *(undefined4 *)(plVar6 + 0x23) = 0x10000;
  plVar6[2] = (long)&PTR_FUN_04b65d70;
  plVar6[3] = (long)&DAT_3f8000003f800000;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[0x20] = 0;
  *(undefined4 *)(plVar6 + 0x26) = 0xff;
  *(undefined4 *)((long)plVar6 + 0x134) = 0;
  plVar6[0xf] = (long)(PTR_DAT_04bd1198 + 0x10);
  *(undefined4 *)(plVar6 + 0x2b) = 0;
  *(undefined1 *)((long)plVar6 + 0x15e) = 0xff;
  plVar6[0x27] = 0x80000000000;
  plVar6[0x28] = 0;
  *(undefined2 *)((long)plVar6 + 0x15c) = 5;
  plVar6[0x29] = 0;
  plVar6[0x2a] = 0;
  param_1[0x26] = (long)plVar6;
  FUN_03b336f0(plVar6,plVar2,param_1,param_3);
  return;
}

