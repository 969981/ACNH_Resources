
void FUN_01c9498c(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_04bcb7d8;
  plVar9 = (long *)*param_1;
  plVar10 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68);
  uVar6 = (**(code **)(*plVar10 + 0xa8))(plVar10);
  if (((uVar6 & 1) == 0) &&
     (plVar10[2] != plVar10[5] || *(char *)((long)plVar10 + 0x19) != *(char *)((long)plVar10 + 0x31)
     )) {
    plVar10 = *(long **)(*(long *)puVar4 + 0x68);
    cVar5 = (**(code **)(*plVar10 + 0x160))(plVar10,plVar10 + 5);
    lVar8 = *(long *)(plVar9[3] + (long)cVar5 * 8);
    puVar7 = (undefined4 *)
             **(undefined8 **)(*(long *)(lVar8 + 8) + (long)*(int *)(lVar8 + 0x20) * 8);
  }
  else {
    puVar7 = (undefined4 *)(**(code **)(*plVar9 + 0x108))(plVar9);
  }
  *(undefined4 *)(param_1 + 2) = *puVar7;
  uVar1 = puVar7[0x2e];
  uVar2 = puVar7[0x2f];
  param_1[3] = *(undefined8 *)(puVar7 + 1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(puVar7 + 3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar7 + 0x1c);
  *(byte *)(param_1 + 6) = (byte)uVar1 & 1;
  *(byte *)((long)param_1 + 0x31) = (byte)uVar2 & 1;
  *(undefined4 *)((long)param_1 + 0x2c) = puVar7[0x1f];
  *(undefined1 *)((long)param_1 + 0x32) = *(undefined1 *)(puVar7 + 0x2b);
  param_1[7] = *(undefined8 *)((long)puVar7 + 0xd);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((long)puVar7 + 0x15);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((long)puVar7 + 0x71);
  *(byte *)(param_1 + 10) = (byte)(uVar1 >> 1) & 1;
  *(byte *)((long)param_1 + 0x51) = (byte)(uVar2 >> 1) & 1;
  *(undefined4 *)((long)param_1 + 0x4c) = puVar7[0x20];
  *(undefined1 *)((long)param_1 + 0x52) = *(undefined1 *)((long)puVar7 + 0xad);
  param_1[0xb] = *(undefined8 *)((long)puVar7 + 0x16);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((long)puVar7 + 0x1e);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((long)puVar7 + 0x72);
  *(byte *)(param_1 + 0xe) = (byte)(uVar1 >> 2) & 1;
  *(byte *)((long)param_1 + 0x71) = (byte)(uVar2 >> 2) & 1;
  *(undefined4 *)((long)param_1 + 0x6c) = puVar7[0x21];
  *(undefined1 *)((long)param_1 + 0x72) = *(undefined1 *)((long)puVar7 + 0xae);
  param_1[0xf] = *(undefined8 *)((long)puVar7 + 0x1f);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((long)puVar7 + 0x27);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((long)puVar7 + 0x73);
  *(byte *)(param_1 + 0x12) = (byte)(uVar1 >> 3) & 1;
  *(byte *)((long)param_1 + 0x91) = (byte)(uVar2 >> 3) & 1;
  *(undefined4 *)((long)param_1 + 0x8c) = puVar7[0x22];
  *(undefined1 *)((long)param_1 + 0x92) = *(undefined1 *)((long)puVar7 + 0xaf);
  param_1[0x13] = *(undefined8 *)(puVar7 + 10);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(puVar7 + 0xc);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar7 + 0x1d);
  *(byte *)(param_1 + 0x16) = (byte)(uVar1 >> 4) & 1;
  *(byte *)((long)param_1 + 0xb1) = (byte)(uVar2 >> 4) & 1;
  *(undefined4 *)((long)param_1 + 0xac) = puVar7[0x23];
  *(undefined1 *)((long)param_1 + 0xb2) = *(undefined1 *)(puVar7 + 0x2c);
  param_1[0x17] = *(undefined8 *)((long)puVar7 + 0x31);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((long)puVar7 + 0x39);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((long)puVar7 + 0x75);
  *(byte *)(param_1 + 0x1a) = (byte)(uVar1 >> 5) & 1;
  *(byte *)((long)param_1 + 0xd1) = (byte)(uVar2 >> 5) & 1;
  *(undefined4 *)((long)param_1 + 0xcc) = puVar7[0x24];
  *(undefined1 *)((long)param_1 + 0xd2) = *(undefined1 *)((long)puVar7 + 0xb1);
  param_1[0x1b] = *(undefined8 *)((long)puVar7 + 0x3a);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((long)puVar7 + 0x42);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)((long)puVar7 + 0x76);
  *(byte *)(param_1 + 0x1e) = (byte)(uVar1 >> 6) & 1;
  *(byte *)((long)param_1 + 0xf1) = (byte)(uVar2 >> 6) & 1;
  *(undefined4 *)((long)param_1 + 0xec) = puVar7[0x25];
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)puVar7 + 0xb2);
  param_1[0x1f] = *(undefined8 *)((long)puVar7 + 0x43);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((long)puVar7 + 0x4b);
  uVar3 = *(undefined1 *)((long)puVar7 + 0x77);
  *(byte *)(param_1 + 0x22) = (byte)(uVar1 >> 7) & 1;
  *(byte *)((long)param_1 + 0x111) = (byte)(uVar2 >> 7) & 1;
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  *(undefined4 *)((long)param_1 + 0x10c) = puVar7[0x26];
  *(undefined1 *)((long)param_1 + 0x112) = *(undefined1 *)((long)puVar7 + 0xb3);
  if (7 < *(byte *)((long)param_1 + 0x225)) {
    FUN_01c94580(param_1);
  }
  *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf90) + 8) = *(undefined4 *)(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x01c94c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x38))((long *)param_1[1],1);
  return;
}

