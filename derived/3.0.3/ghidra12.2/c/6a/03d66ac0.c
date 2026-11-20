
void FUN_03d66ac0(long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_388 [280];
  undefined *local_270;
  undefined1 *puStack_268;
  undefined4 local_260;
  undefined1 local_25c [255];
  undefined1 local_15d;
  undefined1 auStack_158 [280];
  
  plVar3 = param_1 + 3;
  (**(code **)(*plVar3 + 0x18))(plVar3);
  uVar5 = 0;
  bVar2 = true;
  do {
    cVar1 = *(char *)(param_1[4] + uVar5);
    if (cVar1 == '\0') break;
    if (cVar1 == '/') {
      if (bVar2) {
LAB_03d66b60:
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = param_3[1];
        (**(code **)(param_1[3] + 0x18))(plVar3);
        FUN_006e9528(auStack_158,"UI_%s%s",lVar6,param_1[4]);
        local_15d = 0;
        local_260 = 0x100;
        puStack_268 = local_25c;
        local_25c[0] = 0;
        local_270 = PTR_DAT_04bb21f8 + 0x10;
        FUN_03eb9c70(&local_270,auStack_158,0x5f);
        FUN_03ea4bd0(param_2,&local_270,0);
        if ((*(byte *)((long)param_3 + 0x2c) >> 1 & 1) != 0) {
          return;
        }
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = param_3[1];
        plVar3 = (long *)(**(code **)(*param_1 + 0x20))(param_1);
        (**(code **)(*plVar3 + 0x18))();
        FUN_006e9528(auStack_388,"UI_Default_%s_%s",lVar6,plVar3[1]);
        puVar4 = auStack_388;
        goto LAB_03d66c68;
      }
      break;
    }
    lVar6 = param_1[4] + uVar5;
    cVar1 = *(char *)(lVar6 + 1);
    if (cVar1 == '\0') break;
    if (cVar1 == '/') goto LAB_03d66b60;
    cVar1 = *(char *)(lVar6 + 2);
    if (cVar1 == '\0') break;
    if (cVar1 == '/') goto LAB_03d66b60;
    bVar2 = uVar5 < 0x7fffe;
    uVar5 = uVar5 + 3;
  } while (uVar5 != 0x80001);
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_006e9528(auStack_158,"UI_Body_%s",param_3[1]);
  puVar4 = auStack_158;
LAB_03d66c68:
  FUN_03ea4bd0(param_2,puVar4,0);
  return;
}

