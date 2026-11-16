
void FUN_029f8e28(long *param_1,undefined4 param_2,long param_3,int param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  long local_68;
  undefined4 local_60;
  undefined *local_58;
  long local_50;
  undefined1 local_48;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) == (int)param_1[1])) {
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x10;
    if ((*(long *)(lVar3 + 0x28) != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x10))();
      (**(code **)(**(long **)(lVar3 + 0x58) + 0x38))(*(long **)(lVar3 + 0x58),0xffffffff);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (param_3 != 0) {
    FUN_038d1270(param_1 + 0x14,"Npc_Whistle_%d",param_2);
    local_68 = 0;
    local_60 = 0;
    lVar3 = (**(code **)(**(long **)(*(long *)(param_3 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar3 + 0x78) != '\0') &&
       (uVar2 = FUN_03bf46a8(param_3,"searchAndEmit(%s)",&DAT_04078763), (uVar2 & 1) != 0)) {
      local_48 = 0;
      local_58 = PTR_DAT_04bcadf8 + 0x10;
      local_50 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_3 + 0x30) + 0x18),&DAT_04078763);
      if (local_50 != 0) {
        FUN_03bf47b0(param_3,&local_58,&local_68);
      }
    }
    *param_1 = local_68;
    *(undefined4 *)(param_1 + 1) = local_60;
    lVar3 = *param_1;
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) == (int)param_1[1])) {
      *(ushort *)(lVar3 + 0x98) = *(ushort *)(lVar3 + 0x98) | 1;
      *(ushort *)(lVar3 + 0x9a) = *(ushort *)(lVar3 + 0x9a) | 1;
      fVar4 = 0.0;
      if (0.0 <= (float)param_4 / 127.0) {
        fVar4 = (float)param_4 / 127.0;
      }
      *(float *)(lVar3 + 0x9c) = fVar4;
    }
  }
  return;
}

