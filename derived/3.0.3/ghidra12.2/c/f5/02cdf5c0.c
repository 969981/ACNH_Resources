
void FUN_02cdf5c0(long param_1,byte *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  byte local_38 [4];
  byte local_34 [4];
  
  FUN_02cded9c();
  puVar1 = PTR_DAT_04bb4f78;
  local_38[0] = *param_2;
  if (local_38[0] < 8) {
    lVar3 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
    if ((param_3 < 8) && (lVar3 != 0)) {
      lVar3 = lVar3 + (ulong)param_3 * 0x2450;
      if ((*(long **)(lVar3 + 0x3f28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x3f28), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      uVar5 = FUN_026e9ac0(*(long *)(lVar3 + 0x3f10) + *(long *)(lVar3 + 0x3f08));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x3f28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3f28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      if ((uVar5 & 1) != 0) {
        local_34[0] = *param_2;
        uVar2 = 1;
        if (7 < local_34[0]) {
          local_34[0] = 0xff;
        }
        lVar6 = FUN_02583354(*(undefined8 *)puVar1,local_34,1);
        lVar3 = 0;
        if (lVar6 != 0) {
          lVar3 = lVar6 + (ulong)param_3 * 0x2450 + 0x3f00;
        }
        if (*(long **)(lVar3 + 0x60) != (long *)0x0) {
          puVar4 = (undefined8 *)**(long **)(lVar3 + 0x60);
          if (puVar4 == (undefined8 *)0x0) {
            uVar2 = 1;
          }
          else {
            uVar2 = (**(code **)*puVar4)();
            uVar2 = uVar2 ^ 1;
          }
        }
        puVar7 = (undefined2 *)FUN_026e85f0(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 8) = *puVar7;
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e88f0(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 0x10) = *puVar7;
        *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e8b00(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 0x18) = *puVar7;
        *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e8d10(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        uVar5 = FUN_02cd92f0();
        if ((uVar5 & 1) == 0) {
          *(undefined2 *)(param_1 + 0x28) = *puVar7;
          *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(puVar7 + 1);
          *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)((long)puVar7 + 3);
          *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar7 + 2);
          puVar7 = (undefined2 *)FUN_026e9010(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
          puVar8 = (undefined4 *)(param_1 + 0x34);
          *(undefined2 *)(param_1 + 0x30) = *puVar7;
          *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(puVar7 + 1);
          *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)((long)puVar7 + 3);
        }
        else {
          *(undefined2 *)(param_1 + 0x20) = *puVar7;
          *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puVar7 + 1);
          *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)((long)puVar7 + 3);
          puVar8 = (undefined4 *)(param_1 + 0x24);
        }
        *puVar8 = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e9240(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 0x38) = *puVar7;
        *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e9470(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 0x40) = *puVar7;
        *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(puVar7 + 2);
        puVar7 = (undefined2 *)FUN_026e96a0(*(long *)(lVar3 + 0x48) + *(long *)(lVar3 + 0x40));
        *(undefined2 *)(param_1 + 0x48) = *puVar7;
        *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(puVar7 + 1);
        *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)((long)puVar7 + 3);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(puVar7 + 2);
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x60) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)();
        }
        FUN_02cdef08(param_1);
        FUN_02cdf164(param_1);
      }
    }
  }
  return;
}

