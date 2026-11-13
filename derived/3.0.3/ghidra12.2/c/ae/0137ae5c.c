
void FUN_0137ae5c(long param_1,long param_2)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  float fVar4;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  byte local_30;
  short local_24 [2];
  
  local_40 = PTR_DAT_04bbfe68 + 0x10;
  local_38 = 1;
  uStack_34 = DAT_0516b10c;
  local_30 = FUN_017baf44();
  local_30 = local_30 & 1;
  local_60 = PTR_DAT_04bb2010 + 0x10;
  uStack_48 = 0;
  uStack_58 = 0;
  local_50 = local_60;
  puVar2 = (undefined2 *)FUN_01a5190c(&local_40,0,param_2,&local_50);
  local_68 = *puVar2;
  local_66 = *(undefined1 *)(puVar2 + 1);
  local_65 = *(undefined1 *)((long)puVar2 + 3);
  local_64 = *(undefined4 *)(puVar2 + 2);
  puVar2 = (undefined2 *)FUN_01a5190c(&local_40,1,param_2,&local_60);
  local_70 = *puVar2;
  local_6e = *(undefined1 *)(puVar2 + 1);
  local_6d = *(undefined1 *)((long)puVar2 + 3);
  local_6c = *(undefined4 *)(puVar2 + 2);
  iVar1 = FUN_01377528(&local_68,&local_50,*(undefined1 *)(*(long *)(param_1 + 8) + 8),0);
  local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar1);
  if ((((iVar1 != 7) && (iVar1 != 8)) && (iVar1 != 9)) && (iVar1 != 10)) {
    *(float *)**(undefined8 **)(param_1 + 0x10) = *(float *)**(undefined8 **)(param_1 + 0x10) + 1.0;
  }
  iVar1 = FUN_01377528(&local_70,&local_60,*(undefined1 *)(*(long *)(param_1 + 8) + 8),0);
  if (((iVar1 != 7) && (iVar1 != 8)) && ((iVar1 != 9 && (iVar1 != 10)))) {
    *(float *)**(undefined8 **)(param_1 + 0x10) = *(float *)**(undefined8 **)(param_1 + 0x10) + 1.0;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 9) == '\0') {
    local_80 = PTR_DAT_04bb2018 + 0x10;
    fVar4 = (float)*(int *)(param_2 + 8) * 0.5;
    uVar3 = 0;
    if (fVar4 != (float)(int)fVar4) {
      uVar3 = (uint)(fVar4 < 0.0);
    }
    local_78 = (int)fVar4 - uVar3;
    fVar4 = (float)*(int *)(param_2 + 0xc) * 0.5;
    uVar3 = 0;
    if (fVar4 != (float)(int)fVar4) {
      uVar3 = (uint)(fVar4 < 0.0);
    }
    iStack_74 = (int)fVar4 - uVar3;
    FUN_01320eac(local_24,**(undefined8 **)(param_1 + 0x18),&local_80);
    if (local_24[0] != DAT_04cb6038) {
      *(float *)(**(long **)(param_1 + 0x10) + 4) =
           *(float *)(**(long **)(param_1 + 0x10) + 4) + 1.0;
    }
  }
  return;
}

