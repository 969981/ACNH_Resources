
void FUN_027cf920(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined2 *puVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  undefined **local_428;
  long lStack_420;
  long local_418 [30];
  long local_328 [6];
  long local_2f8 [6];
  long local_2c8 [12];
  long local_268 [13];
  undefined1 auStack_200 [152];
  undefined **local_168;
  char *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_0074fda4(auStack_200,"Param/NpcHouse/%s.byml",param_2[1]);
  uVar1 = FUN_03eba3a0(auStack_200);
  if (((uVar1 & 1) != 0) &&
     (plVar5 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar5 != (long *)0x0)) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar6 = *(long *)(lVar2 + 0xa8);
    *(long **)(lVar2 + 0xa8) = plVar5;
    local_160 = "NpcHouse";
    local_168 = &PTR_LAB_048f9770;
    (**(code **)(*param_2 + 0x18))(param_2);
    lStack_420 = param_2[1];
    local_428 = &PTR_LAB_048f9770;
    FUN_0219fd80(local_418,&local_168,&local_428,0);
    local_160 = local_154;
    local_55 = 0;
    local_158 = 0x100;
    local_154[0] = 0;
    local_168 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    uVar1 = (**(code **)(local_418[0] + 0xf0))(local_418,&local_168,1);
    if ((uVar1 & 1) != 0) {
      FUN_03c27e60(local_418,&local_168,plVar5);
    }
    puVar3 = (undefined2 *)(**(code **)(local_328[0] + 0xf0))(local_328);
    *(undefined2 *)(param_1 + 8) = *puVar3;
    puVar3 = (undefined2 *)(**(code **)(local_2f8[0] + 0xf0))(local_2f8);
    *(undefined2 *)(param_1 + 10) = *puVar3;
    puVar3 = (undefined2 *)(**(code **)(local_2c8[0] + 0xf0))(local_2c8);
    *(undefined2 *)(param_1 + 0xc) = *puVar3;
    puVar4 = (ulong *)(**(code **)(local_268[0] + 0xf0))(local_268);
    uVar1 = *puVar4;
    local_168 = (undefined **)(uVar1 & 0xffff);
    FUN_0277d4ac(&local_168);
    *(char *)(param_1 + 0x1ca) = (char)(uVar1 >> 0x10);
    *(char *)(param_1 + 0x1cb) = (char)(uVar1 >> 0x18);
    *(int *)(param_1 + 0x1cc) = (int)(uVar1 >> 0x20);
    *(undefined2 *)(param_1 + 0x1c8) = local_168._0_2_;
    (**(code **)(local_418[0] + 0x20))(local_418);
    (**(code **)(*plVar5 + 0x58))(plVar5);
    if (lVar6 != 1) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      *(long *)(lVar2 + 0xa8) = lVar6;
    }
  }
  return;
}

