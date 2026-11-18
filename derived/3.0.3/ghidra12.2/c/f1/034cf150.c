
void FUN_034cf150(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  if (*(long *)PTR_DAT_04bb47e0 == 0) {
    *param_1 = 0xfffe;
    FUN_0277d4ac(param_1);
    return;
  }
  puVar3 = (undefined2 *)FUN_01952450();
  local_80._0_2_ = *puVar3;
  local_80._2_1_ = *(undefined1 *)(puVar3 + 1);
  local_80._3_1_ = *(undefined1 *)((long)puVar3 + 3);
  local_7c = *(undefined4 *)(puVar3 + 2);
  local_78 = puVar3[4];
  local_76 = *(undefined1 *)(puVar3 + 5);
  local_75 = *(undefined1 *)((long)puVar3 + 0xb);
  local_74 = *(undefined4 *)(puVar3 + 6);
  local_70 = puVar3[8];
  local_6e = *(undefined1 *)(puVar3 + 9);
  local_6d = *(undefined1 *)((long)puVar3 + 0x13);
  local_6c = *(undefined4 *)(puVar3 + 10);
  local_68 = puVar3[0xc];
  local_66 = *(undefined1 *)(puVar3 + 0xd);
  local_65 = *(undefined1 *)((long)puVar3 + 0x1b);
  local_64 = *(undefined4 *)(puVar3 + 0xe);
  local_60 = puVar3[0x10];
  local_5e = *(undefined1 *)(puVar3 + 0x11);
  local_5d = *(undefined1 *)((long)puVar3 + 0x23);
  local_5c = *(undefined4 *)(puVar3 + 0x12);
  local_58 = puVar3[0x14];
  local_56 = *(undefined1 *)(puVar3 + 0x15);
  local_55 = *(undefined1 *)((long)puVar3 + 0x2b);
  local_54 = *(undefined4 *)(puVar3 + 0x16);
  local_50 = puVar3[0x18];
  local_4e = *(undefined1 *)(puVar3 + 0x19);
  local_4d = *(undefined1 *)((long)puVar3 + 0x33);
  local_4c = *(undefined4 *)(puVar3 + 0x1a);
  local_48 = puVar3[0x1c];
  local_46 = *(undefined1 *)(puVar3 + 0x1d);
  local_45 = *(undefined1 *)((long)puVar3 + 0x3b);
  local_44 = *(undefined4 *)(puVar3 + 0x1e);
  local_40 = puVar3[0x20];
  local_3e = *(undefined1 *)(puVar3 + 0x21);
  local_3d = *(undefined1 *)((long)puVar3 + 0x43);
  local_3c = *(undefined4 *)(puVar3 + 0x22);
  local_38 = puVar3[0x24];
  local_36 = *(undefined1 *)(puVar3 + 0x25);
  local_35 = *(undefined1 *)((long)puVar3 + 0x4b);
  local_34 = *(undefined4 *)(puVar3 + 0x26);
  local_30 = puVar3[0x28];
  local_2e = *(undefined1 *)(puVar3 + 0x29);
  local_2d = *(undefined1 *)((long)puVar3 + 0x53);
  local_2c = *(undefined4 *)(puVar3 + 0x2a);
  local_28 = puVar3[0x2c];
  local_26 = *(undefined1 *)(puVar3 + 0x2d);
  local_25 = *(undefined1 *)((long)puVar3 + 0x5b);
  local_24 = *(undefined4 *)(puVar3 + 0x2e);
  puVar1 = &local_80 + (ulong)param_2 * 2;
  if (0xb < param_2) {
    puVar1 = &local_80;
  }
  uVar2 = puVar1[1];
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  return;
}

