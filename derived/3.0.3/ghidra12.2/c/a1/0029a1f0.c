
void FUN_0029a1f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong local_15c;
  undefined4 local_154;
  undefined8 local_150;
  
  *(undefined1 *)(param_1 + 0x15d) = 0;
  if (*(long *)(param_1 + 0xf0) != 0) {
    lVar1 = FUN_0026c89c(DAT_04c603c8);
    lVar5 = *(long *)(lVar1 + 8);
    lVar1 = FUN_0026c89c(DAT_04c603c8);
    if (lVar5 != lVar1) {
      bVar6 = false;
      uVar4 = 0;
      do {
        lVar1 = *(long *)(lVar5 + 0x10);
        if (lVar1 == *(long *)(param_1 + 0xf0)) {
          bVar6 = true;
        }
        else if (lVar1 != 0) {
          uVar3 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          (&local_150)[uVar3] = lVar1;
        }
        lVar5 = *(long *)(lVar5 + 8);
        lVar1 = FUN_0026c89c(DAT_04c603c8);
      } while (lVar5 != lVar1);
      if (bVar6) {
        uVar3 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        (&local_150)[uVar3] = *(undefined8 *)(param_1 + 0xf0);
      }
      if (uVar4 != 0) {
        uVar3 = (ulong)uVar4;
        puVar7 = &local_150;
        do {
          FUN_0029a3e0(param_1,*puVar7,0xfd);
          uVar3 = uVar3 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar3 != 0);
      }
    }
    uVar2 = FUN_0026c89c(DAT_04c603c8);
    local_154 = 0;
    local_15c = 0x2000000000000;
    FUN_00261158(uVar2,&local_15c);
    local_15c = 0x2000000000000;
    local_154 = 0;
    FUN_0029283c(*(undefined8 *)(param_1 + 0xb8),&local_15c);
  }
  FUN_0026c89c(DAT_04c603c8);
  FUN_00260d30();
  FUN_002918f0(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xd4) = 0;
  local_150._0_4_ = 0;
  local_15c = local_15c & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_150 + 4),(Result *)&local_15c);
  FUN_00229780(param_1 + 0xdc,&local_150);
  FUN_00223674(DAT_04c5fbb0);
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x206) = 0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  memset((void *)(param_1 + 0x1e5),0,0x20);
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
  }
  return;
}

