
void FUN_0021eea0(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined4 local_34;
  
  FUN_00229570();
  FUN_0021f250();
  puVar4 = PTR_DAT_04bccf00;
  if (((*param_2 == 0) || ((int)param_2[1] == 0)) || ((*param_2 & 7) != 0)) {
    uVar5 = 0x10c07;
  }
  else {
    if (DAT_04c5efb8 != '\x01') {
      DAT_04c5efbc = *(undefined4 *)((long)param_2 + 0xc);
      if ((DAT_04c5efb9 & 1) == 0) {
        FUN_00223ba0(PTR_DAT_04bccf00);
        FUN_002257c0(PTR_DAT_04bccf10);
        DAT_04c5efb9 = 1;
      }
      else {
        uVar6 = *(undefined8 *)(PTR_DAT_04bccf00 + 0x38);
        uVar2 = *(undefined2 *)(PTR_DAT_04bccf00 + 0x40);
        uVar1 = PTR_DAT_04bccf00[0x42];
        FUN_00223ba0(PTR_DAT_04bccf00);
        FUN_002257c0(PTR_DAT_04bccf10);
        *(undefined8 *)(puVar4 + 0x38) = uVar6;
        *(undefined2 *)(puVar4 + 0x40) = uVar2;
        puVar4[0x42] = uVar1;
      }
      FUN_0021f274(*param_2,(int)param_2[1]);
      puVar3 = PTR_DAT_04bccec0;
      *(int *)(puVar4 + 0x24) = (int)param_2[1];
      local_50 = puVar3 + 0x10;
      pcStack_48 = "pia common heap";
      FUN_0021f320(2,0,&local_50);
      FUN_00223044(&DAT_04c5efc8);
      DAT_04c5efc0 = &DAT_04c5efc8;
      *(undefined **)PTR_DAT_04bccf18 = &DAT_04c5efc8;
      FUN_00285fec(&PTR_PTR_04be2338);
      DAT_04c5efb8 = '\x01';
      FUN_0022957c(&local_50,2);
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      goto LAB_0021eef0;
    }
    uVar5 = 0x10c02;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar5);
LAB_0021eef0:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

