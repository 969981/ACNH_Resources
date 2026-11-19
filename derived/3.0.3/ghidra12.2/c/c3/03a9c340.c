
void FUN_03a9c340(uint *param_1,long *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  long *plVar11;
  uint local_68;
  uint uStack_64;
  long local_60;
  long *plStack_58;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  FUN_0390a734(param_1 + 0x8c,1,0x2e,param_3,param_4,1,1,1,0,1);
  puVar5 = PTR_DAT_04bb2698;
  uVar2 = param_1[0x9c];
  uVar3 = param_1[0x9b];
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar7 = malloc(0x38);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_03a9c40c;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
  }
LAB_03a9c40c:
  plVar7[6] = 0;
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  bVar9 = 0;
  plVar7[4] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar7 + 5) = 0;
  *plVar7 = (long)puVar1;
  if (param_2 == (long *)0x0) {
    lVar6 = *(long *)puVar5;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = (long *)(lVar6 + 8);
    if (lVar10 != 0) {
      param_2 = (long *)(lVar10 + 0xa8);
    }
    param_2 = (long *)*param_2;
    bVar9 = *(byte *)(plVar7 + 5) & 0xfe;
  }
  plVar7[6] = 0;
  *(byte *)(plVar7 + 5) = bVar9;
  *(undefined2 *)((long)plVar7 + 0x2a) = 0;
  *plVar11 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  if (uVar2 == 0) {
    local_68 = 0;
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_60 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar7,param_2,uVar2,uVar3,8);
    local_60 = plVar7[3];
    *(undefined2 *)((long)plVar7 + 0x2a) = 8;
    local_68 = 0;
    if (plVar7[4] != 0) {
      local_68 = (int)*plVar11 - *(int *)(plVar7[4] + 0x10);
    }
    if (local_60 != 0) {
      uStack_64 = *(uint *)(local_60 + 0x104);
      goto LAB_03a9c4ec;
    }
  }
  uStack_64 = 0;
LAB_03a9c4ec:
  param_1[0xb4] = local_68;
  param_1[0xb5] = uStack_64;
  *(long *)(param_1 + 0xb6) = local_60;
  *(long **)(param_1 + 0xb8) = plVar7;
  param_1[0x8c] = local_68;
  param_1[0x8d] = uStack_64;
  *(long *)(param_1 + 0x8e) = local_60;
  *(long **)(param_1 + 0x90) = plVar7;
  if ((*(byte *)((long)param_1 + 0x27e) >> 1 & 1) == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = 0x11 < (ushort)param_1[0xb2] && (ushort)param_1[0xb2] - 0x59 < 0xffffffd6;
  }
  plStack_58 = plVar7;
  FUN_038fd3e0(param_1 + 0xa0,&local_68,param_1 + 0x98,0,*(undefined8 *)(param_1 + 0xb0),bVar8,1);
  FUN_01560750(param_1 + 0x3a,param_1 + 0x8c,*(undefined1 *)((long)param_1 + 0x1a6),
               (short)param_1[0x69]);
  *(uint **)(param_1 + 0x7a) = param_1 + 0x3a;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[2] = param_1[0x8c];
  param_1[3] = param_1[0x8d];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x8e);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  param_1[8] = param_1[0x92];
  param_1[9] = param_1[0x93];
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x96);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x9a);
  param_1[0x74] = (uint)(float)(int)uVar2;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x9c);
  param_1[0x75] = (uint)(float)(int)uVar3;
  param_1[0x76] = (uint)(float)(int)(uVar2 & (int)uVar2 >> 0x1f);
  param_1[0x78] = (uint)(float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  *(undefined8 *)((long)param_1 + 0x4f) = *(undefined8 *)((long)param_1 + 0x277);
  param_1[0x77] = (uint)(float)(int)(uVar3 & (int)uVar3 >> 0x1f);
  param_1[0x79] = (uint)(float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  FUN_038fd1e0(param_1 + 0x16);
  FUN_038fd2f0(param_1 + 0x16,param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0xb0);
  param_1[0x28] = param_1[0xb2];
  param_1 = param_1 + 0x37;
  do {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar8) {
      *param_1 = *param_1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}

