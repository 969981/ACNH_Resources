
bool FUN_039fb530(long param_1,long param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 == 0xffffffff) goto LAB_039fb654;
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 0x20);
  plVar6 = (long *)*puVar1;
  uVar5 = puVar1[2];
  lVar2 = (ulong)(uint)(*(int *)(puVar1 + 1) + (int)uVar5 * param_4) + plVar6[0xe];
  if (((uVar3 ^ 0xffffffff) & 0xff) == 0) {
    cVar4 = (char)(uVar3 >> 8);
    if (((uVar3 >> 8 ^ 0xffffffff) & 0xff) != 0) {
LAB_039fb5d8:
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar7,1,(int)cVar4,lVar2,uVar5);
    }
  }
  else {
    (**(code **)(*plVar6 + 0x40))(plVar6,uVar7,0,(int)(char)uVar3,lVar2,uVar5);
    cVar4 = *(char *)(param_1 + 0x2d);
    if (cVar4 != -1) goto LAB_039fb5d8;
  }
  if (*(char *)(param_1 + 0x2e) != -1) {
    (**(code **)(*plVar6 + 0x40))(plVar6,uVar7,2,(long)*(char *)(param_1 + 0x2e),lVar2,uVar5);
  }
  if (*(char *)(param_1 + 0x2f) != -1) {
    (**(code **)(*plVar6 + 0x40))(plVar6,uVar7,5,(long)*(char *)(param_1 + 0x2f),lVar2,uVar5);
  }
LAB_039fb654:
  return uVar3 != 0xffffffff;
}

