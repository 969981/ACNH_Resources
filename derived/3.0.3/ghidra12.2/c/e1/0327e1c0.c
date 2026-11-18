
/* WARNING: Removing unreachable block (ram,0x0327e30c) */
/* WARNING: Removing unreachable block (ram,0x0327e1f0) */
/* WARNING: Removing unreachable block (ram,0x0327e29c) */
/* WARNING: Removing unreachable block (ram,0x0327e390) */

void FUN_0327e1c0(long *param_1,char *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  
  plVar2 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0xe0,8);
  *(undefined4 *)(plVar2 + 0x14) = 0x10000;
  *(undefined4 *)(plVar2 + 0xb) = 0xffffffff;
  plVar2[1] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = (long)"agl::TextureData";
  *(undefined4 *)(plVar2 + 0x17) = 0xff;
  *(undefined4 *)((long)plVar2 + 0xbc) = 0;
  *plVar2 = (long)(PTR_DAT_04bd1198 + 0x10);
  plVar2[0x1a] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x18] = 0x80000000000;
  plVar2[0x19] = 0;
  plVar3 = (long *)param_1[1];
  param_1[1] = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar2 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x68,8);
  puVar1 = PTR_DAT_04bd1178;
  plVar2[2] = 0;
  plVar2[3] = (long)&DAT_3f8000003f800000;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[0xc] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[0xb] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)&DAT_3f8000003f800000;
  plVar3 = (long *)*param_1;
  *param_1 = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  plVar2 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0x28,8);
  puVar1 = PTR_DAT_04bd0ea8;
  *plVar2 = (long)(PTR_DAT_04bd0f08 + 0x10);
  plVar2[1] = 0x7f7fffff7f7fffff;
  *(undefined4 *)(plVar2 + 3) = *(undefined4 *)puVar1;
  *(undefined8 *)((long)plVar2 + 0x1c) = 0x3f80000000000000;
  plVar2[2] = -0x80000000800001;
  plVar3 = (long *)param_1[3];
  param_1[3] = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*param_2 != '\0') {
    plVar2 = (long *)(**(code **)(*(long *)*param_3 + 0x30))((long *)*param_3,0xe0,8);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 0x14) = 0x10000;
    *(undefined4 *)(plVar2 + 0xb) = 0xffffffff;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[10] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    plVar2[0x11] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = (long)"agl::TextureData";
    *(undefined4 *)(plVar2 + 0x17) = 0xff;
    puVar1 = PTR_DAT_04bd11a0 + 0x10;
    *(undefined4 *)((long)plVar2 + 0xbc) = 0;
    *plVar2 = (long)puVar1;
    plVar2[0x1a] = 0;
    plVar2[0x1b] = 0;
    pcVar4 = *(code **)PTR_DAT_04bcf220;
    plVar2[0x18] = 0x80000000000;
    plVar2[0x19] = 0;
    (*pcVar4)(plVar2 + 0x15);
    plVar3 = (long *)param_1[2];
    param_1[2] = (long)plVar2;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0327e438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}

