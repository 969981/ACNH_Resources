
void FUN_03870b80(int *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  *param_1 = param_2;
  param_1[1] = 1;
  FUN_0021f210(param_1 + 2);
  *(undefined2 *)(param_1 + 7) = 0;
  FUN_002bd460(param_1 + 8);
  FUN_0030a3f0(param_1 + 0x198);
  FUN_0030a3f0(param_1 + 0x4e6);
  param_1[0x834] = 0;
  FUN_002cbdf0(param_1 + 0x836);
  FUN_002cbae4(param_1 + 0x918);
  FUN_0030c000(param_1 + 0x1148);
  *(undefined1 *)(param_1 + 0x13a8) = 0;
  param_1[0x13aa] = 0;
  param_1[0x13ac] = 0;
  param_1[0x13ad] = 0;
  FUN_0024dda0(param_1 + 0x13b0);
  FUN_0024432c(param_1 + 0x13be);
  FUN_002446f8(param_1 + 0x144c);
  FUN_0022cd1c(param_1 + 0x176a);
  FUN_00242804(param_1 + 0x17da);
  FUN_00242804(param_1 + 0x1874);
  FUN_0022d674(param_1 + 0x190e);
  FUN_0022d41c(param_1 + 0x1b4a);
  lVar7 = DAT_05ae7600;
  if (param_2 != 1) goto LAB_03870d68;
  if (DAT_05ae7600 == 0) {
    pvVar3 = malloc(0x960);
    if (pvVar3 == (void *)0x0) goto LAB_03870cdc;
LAB_03870cc0:
    uVar4 = 300;
    *(void **)(param_1 + 0x13ac) = pvVar3;
    param_1[0x13aa] = 300;
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar7 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if ((plVar2 != (long *)0x0) &&
       (pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x960,8), pvVar3 != (void *)0x0))
    goto LAB_03870cc0;
LAB_03870cdc:
    uVar4 = param_1[0x13aa];
    if ((int)uVar4 < 1) goto LAB_03870d68;
  }
  uVar8 = (ulong)uVar4;
  uVar5 = uVar8 & 3;
  if (uVar8 - 1 < 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar7 = uVar6 * 8;
      uVar6 = uVar6 + 4;
      *(undefined8 *)(*(long *)(param_1 + 0x13ac) + lVar7) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x13ac) + lVar7 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x13ac) + lVar7 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x13ac) + lVar7 + 0x18) = 0;
    } while ((uVar8 & 0xfffffffc) != uVar6);
  }
  if ((uVar4 & 3) != 0) {
    lVar7 = uVar6 << 3;
    do {
      uVar5 = uVar5 - 1;
      *(undefined8 *)(*(long *)(param_1 + 0x13ac) + lVar7) = 0;
      lVar7 = lVar7 + 8;
    } while (uVar5 != 0);
  }
LAB_03870d68:
  param_1[0x13ae] = 0;
  FUN_03870d80(param_1);
  return;
}

