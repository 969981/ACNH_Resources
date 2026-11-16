
void FUN_029f8c30(long *param_1,long param_2,undefined4 param_3,long param_4,int param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  undefined1 local_58;
  
  lVar4 = *param_1;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_1[1])) {
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10;
    if ((*(long *)(lVar4 + 0x28) != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
      plVar1 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar4 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar1 = (long *)(**(code **)(*plVar1 + 0x38))();
      (**(code **)(*plVar1 + 0x10))();
      (**(code **)(**(long **)(lVar4 + 0x58) + 0x38))(*(long **)(lVar4 + 0x58),0xffffffff);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if (param_4 != 0) {
    if (*(uint *)(param_1 + 3) < 3) {
      puVar3 = (undefined8 *)(&PTR_DAT_04a99118)[*(uint *)(param_1 + 3)];
    }
    else {
      puVar3 = &DAT_0407ebb1;
    }
    FUN_038d1270(param_1 + 0x14,"Npc_Vocal_%s_%s_%d",puVar3,*(undefined8 *)(param_2 + 8),param_3);
    local_78 = 0;
    local_70 = 0;
    lVar4 = (**(code **)(**(long **)(*(long *)(param_4 + 0x30) + 0x18) + 0x20))();
    if ((*(char *)(lVar4 + 0x78) != '\0') &&
       (uVar2 = FUN_03bf46a8(param_4,"searchAndEmit(%s)",&DAT_0408dc0d), (uVar2 & 1) != 0)) {
      local_58 = 0;
      local_68 = PTR_DAT_04bcadf8 + 0x10;
      local_60 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x18),&DAT_0408dc0d);
      if (local_60 != 0) {
        FUN_03bf47b0(param_4,&local_68,&local_78);
      }
    }
    *param_1 = local_78;
    *(undefined4 *)(param_1 + 1) = local_70;
    lVar4 = *param_1;
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == (int)param_1[1])) {
      *(ushort *)(lVar4 + 0x98) = *(ushort *)(lVar4 + 0x98) | 1;
      *(ushort *)(lVar4 + 0x9a) = *(ushort *)(lVar4 + 0x9a) | 1;
      fVar5 = 0.0;
      if (0.0 <= (float)param_5 / 127.0) {
        fVar5 = (float)param_5 / 127.0;
      }
      *(float *)(lVar4 + 0x9c) = fVar5;
    }
  }
  return;
}

