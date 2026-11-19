
void FUN_039638b0(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b68250;
  puVar1 = PTR_DAT_04bbdd00 + 0x10;
  param_1[0x7b] = puVar1;
  FUN_038f4940(param_1 + 0x7b);
  param_1[0x74] = puVar1;
  FUN_038f4940(param_1 + 0x74);
  param_1[0x6d] = puVar1;
  FUN_038f4940(param_1 + 0x6d);
  puVar7 = PTR_DAT_04bd11c0;
  puVar5 = PTR_DAT_04bc1010;
  puVar1 = PTR_DAT_04bd11c0 + 0x10;
  param_1[0x49] = puVar1;
  puVar6 = PTR_DAT_04bc8e38;
  if (param_1[0x69] != 0) {
    lVar8 = *(long *)puVar5;
    (**(code **)PTR_DAT_04bc8e38)(param_1 + 0x4a);
    piVar2 = (int *)(lVar8 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x51) = 0;
    *(undefined1 *)((long)param_1 + 0x294) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined1 *)((long)param_1 + 0x2ac) = 0;
    *(undefined1 *)(param_1 + 0x57) = 0;
    *(undefined1 *)((long)param_1 + 0x2c4) = 0;
    *(undefined1 *)(param_1 + 0x5a) = 0;
    *(undefined1 *)((long)param_1 + 0x2dc) = 0;
    *(undefined1 *)(param_1 + 0x5d) = 0;
    *(undefined1 *)((long)param_1 + 0x2f4) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined1 *)((long)param_1 + 0x30c) = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    *(undefined1 *)((long)param_1 + 0x324) = 0;
    *(undefined1 *)(param_1 + 0x66) = 0;
    *(undefined1 *)((long)param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    param_1[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
  }
  param_1[0x25] = puVar1;
  if (param_1[0x45] != 0) {
    lVar8 = *(long *)puVar5;
    (**(code **)puVar6)(param_1 + 0x26);
    piVar2 = (int *)(lVar8 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)((long)param_1 + 0x174) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((long)param_1 + 0x18c) = 0;
    *(undefined1 *)(param_1 + 0x33) = 0;
    *(undefined1 *)((long)param_1 + 0x1a4) = 0;
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined1 *)((long)param_1 + 0x1bc) = 0;
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined1 *)((long)param_1 + 0x1d4) = 0;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)((long)param_1 + 0x1ec) = 0;
    *(undefined1 *)(param_1 + 0x3f) = 0;
    *(undefined1 *)((long)param_1 + 0x204) = 0;
    *(undefined1 *)(param_1 + 0x42) = 0;
    *(undefined1 *)((long)param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
  }
  param_1[1] = puVar7 + 0x10;
  if (param_1[0x21] != 0) {
    lVar8 = *(long *)puVar5;
    (**(code **)puVar6)(param_1 + 2);
    piVar2 = (int *)(lVar8 + 0x650);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((long)param_1 + 0x84) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)((long)param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)((long)param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined1 *)((long)param_1 + 0xe4) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)((long)param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  return;
}

