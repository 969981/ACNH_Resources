
void FUN_03ca6490(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar3 = FUN_03c9bf30(param_2,*param_1,param_1[3],param_3);
  lVar2 = DAT_05ae7600;
  if (lVar3 != 0) {
    plVar7 = (long *)param_1[2];
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      uVar1 = *(undefined1 *)param_1[1];
LAB_03ca64d8:
      FUN_03d17ab0(lVar4,lVar3,uVar1);
      return;
    }
    if (plVar7[1] == 0) {
      plVar7[1] = lVar3;
      *(undefined1 *)(param_1[2] + 0x10) = *(undefined1 *)param_1[1];
    }
    else if (lVar3 != plVar7[1]) {
      if (DAT_05ae7600 == 0) {
        pvVar5 = malloc(0x18);
      }
      else {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar6 = (undefined8 *)(lVar2 + 8);
        if (lVar4 != 0) {
          puVar6 = (undefined8 *)(lVar4 + 0xa8);
        }
        pvVar5 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x18,8);
      }
      *(void **)((long)pvVar5 + 8) = pvVar5;
      *(undefined8 *)((long)pvVar5 + 0x10) = 0;
      *(void **)pvVar5 = pvVar5;
      *plVar7 = (long)pvVar5;
      puVar6 = (undefined8 *)param_1[2];
      FUN_03d17ab0(*puVar6,puVar6[1],*(undefined1 *)(puVar6 + 2));
      lVar4 = *(long *)param_1[2];
      uVar1 = *(undefined1 *)param_1[1];
      goto LAB_03ca64d8;
    }
  }
  return;
}

