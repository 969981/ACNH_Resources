
void FUN_03671840(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  memset(*(void **)(param_1 + 0xf8),0,0x800);
  memset(*(void **)(param_1 + 0x110),0,0x2000);
  memset(*(void **)(param_1 + 0x108),0,0x2000);
  memset(*(void **)(param_1 + 0x120),0,0x2000);
  memset((void *)(param_1 + 0x138),0,0x230);
  *(undefined2 *)(param_1 + 0x1ce8) = 0;
  *(undefined8 *)(param_1 + 0x1cf0) = 0;
  *(undefined8 *)(param_1 + 0x1d18) = 0;
  *(undefined1 *)(param_1 + 0x2059) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  FUN_03655e04(param_1 + 0xf0);
  puVar1 = PTR_DAT_04bdf328;
  if (*(long *)(param_1 + 0xf0) != 0) {
    (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
  }
  if (*(long *)(param_1 + 0x135f0) != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
    *(undefined8 *)(param_1 + 0x135f0) = 0;
  }
  *(undefined8 *)(param_1 + 0x135d8) = 0;
  *(undefined4 *)(param_1 + 0x135e0) = 0;
  *(undefined4 *)(param_1 + 0x135e8) = 0;
  *(undefined4 *)(param_1 + 0x13990) = 0xffffffff;
  memset((void *)(param_1 + 0x13610),0,0x380);
  plVar2 = *(long **)puVar1;
  *(undefined8 *)(param_1 + 0x113e0) = 0;
  *(undefined8 *)(param_1 + 0x113e8) = 0;
  *(undefined8 *)(param_1 + 0x113f0) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0x2200));
  *(undefined4 *)(param_1 + 0x185c0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20f8) = 0;
  *(undefined8 *)(param_1 + 0x20f0) = 0;
  *(undefined8 *)(param_1 + 0x184e0) = 0;
  *(undefined8 *)(param_1 + 0x184e8) = 0;
  *(undefined8 *)(param_1 + 0x184f0) = 0;
  *(undefined8 *)(param_1 + 0x184f8) = 0;
  *(undefined8 *)(param_1 + 0x18500) = 0;
  *(undefined8 *)(param_1 + 0x18508) = 0;
  *(undefined8 *)(param_1 + 0x18510) = 0;
  *(undefined8 *)(param_1 + 0x18518) = 0;
  *(undefined8 *)(param_1 + 0x18520) = 0;
  *(undefined8 *)(param_1 + 0x18528) = 0;
  *(undefined8 *)(param_1 + 0x18530) = 0;
  *(undefined8 *)(param_1 + 0x18538) = 0;
  *(undefined8 *)(param_1 + 0x18540) = 0;
  *(undefined8 *)(param_1 + 0x18548) = 0;
  *(undefined8 *)(param_1 + 0x18550) = 0;
  *(undefined8 *)(param_1 + 0x18558) = 0;
  *(undefined8 *)(param_1 + 0x18560) = 0;
  *(undefined8 *)(param_1 + 0x18568) = 0;
  *(undefined8 *)(param_1 + 0x18570) = 0;
  *(undefined8 *)(param_1 + 0x18578) = 0;
  *(undefined8 *)(param_1 + 0x18580) = 0;
  *(undefined8 *)(param_1 + 0x18588) = 0;
  *(undefined8 *)(param_1 + 0x18590) = 0;
  *(undefined8 *)(param_1 + 0x18598) = 0;
  *(undefined8 *)(param_1 + 0x185a0) = 0;
  *(undefined8 *)(param_1 + 0x185a8) = 0;
  *(undefined8 *)(param_1 + 0x185b0) = 0;
  *(undefined8 *)(param_1 + 0x185b8) = 0;
  *(undefined8 *)(param_1 + 0x20e8) = 0;
  if (*(long *)(param_1 + 0x13e98) != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x13eac) = 0;
  *(undefined4 *)(param_1 + 0x13ea8) = 2;
  *(undefined8 *)(param_1 + 0x13e98) = 0;
  *(undefined8 *)(param_1 + 0x13ea0) = 0;
  *(undefined8 *)(param_1 + 0x13eb0) = 0;
  *(undefined8 *)(param_1 + 0x13eb8) = 0;
  if (*(long *)(param_1 + 0x13ec0) != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x13ec0) = 0;
  *(undefined8 *)(param_1 + 0x18640) = 0;
  *(undefined1 **)(param_1 + 0x18648) = &LAB_03670950;
  *(undefined1 **)(param_1 + 0x18660) = &LAB_03670980;
  *(undefined1 **)(param_1 + 0x18668) = &LAB_03670990;
  *(undefined1 **)(param_1 + 0x18680) = &LAB_036709c0;
  *(undefined1 **)(param_1 + 0x18650) = &LAB_03670960;
  *(undefined1 **)(param_1 + 0x18658) = &LAB_03670970;
  *(undefined1 **)(param_1 + 0x18670) = &LAB_036709a0;
  *(undefined1 **)(param_1 + 0x18678) = &LAB_036709b0;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

