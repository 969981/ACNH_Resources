
void FUN_0391be20(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_68 = param_1[0x60];
  uStack_64 = param_1[0x61];
  param_1[0x38] = local_68;
  param_1[0x39] = uStack_64;
  local_60 = *(undefined8 *)(param_1 + 0x62);
  uStack_58 = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x3a) = local_60;
  *(undefined8 *)(param_1 + 0x3c) = uStack_58;
  if ((*(byte *)((long)param_1 + 0x12e) >> 1 & 1) == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = 0x11 < *(ushort *)(param_1 + 0x5e) && *(ushort *)(param_1 + 0x5e) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(param_1 + 0x4c,&local_68,param_1 + 0x44,0,*(undefined8 *)(param_1 + 0x5c),bVar7,1);
  if (*(long *)(param_1 + 0x68) != 0) {
    param_1[0x3e] = param_1[0x66];
    param_1[0x3f] = param_1[0x67];
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_1 + 0x6a);
  }
  puVar5 = PTR_DAT_04bcf030;
  lVar8 = *(long *)(param_1 + 0x3a);
  if (lVar8 != 0) {
    uVar2 = param_1[0x48];
    uVar3 = param_1[0x38];
    uVar6 = (**(code **)PTR_DAT_04bcf030)(lVar8);
    if ((uVar6 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar8,uVar3,uVar2);
    }
  }
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    uVar2 = param_1[0x3e];
    uVar3 = param_1[0x49];
    uVar6 = (**(code **)puVar5)(lVar8);
    if ((uVar6 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar8,uVar2,uVar3);
    }
  }
  *param_1 = param_1[0x38];
  param_1[1] = param_1[0x39];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x3a);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x3c);
  param_1[6] = param_1[0x3e];
  param_1[7] = param_1[0x3f];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x42);
  *(undefined8 *)((long)param_1 + 0x47) = *(undefined8 *)((long)param_1 + 0x127);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x46);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x44);
  FUN_038fd1e0(param_1 + 0x14);
  FUN_038fd2f0(param_1 + 0x14,param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x5c);
  param_1[0x26] = param_1[0x5e];
  puVar1 = param_1 + 0x35;
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 | 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 1;
  return;
}

