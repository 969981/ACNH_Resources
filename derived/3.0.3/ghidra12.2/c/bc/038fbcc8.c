
bool FUN_038fbcc8(long *param_1,long param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = param_1[0xe];
  bVar3 = *(byte *)((long)param_1 + 0x39);
  uVar4 = *(ushort *)((long)param_1 + 0x3a);
  lVar5 = param_1[6];
  iVar6 = (**(code **)(*param_1 + 0x20))();
  iVar7 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar1 = *param_3;
  if (uVar1 == 0xffffffff) goto LAB_038fbe1c;
  uVar2 = (undefined4)param_1[6];
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  lVar10 = lVar10 + (ulong)(((int)lVar5 + iVar6) - 1U & -iVar7) *
                    (long)(int)(param_4 + (uint)uVar4 * (uint)bVar3);
  if (((uVar1 ^ 0xffffffff) & 0xff) == 0) {
    cVar8 = (char)(uVar1 >> 8);
    if (((uVar1 >> 8 ^ 0xffffffff) & 0xff) != 0) {
LAB_038fbda0:
      (**(code **)(*param_1 + 0x40))(param_1,uVar9,1,(int)cVar8,lVar10,uVar2);
    }
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,uVar9,0,(int)(char)uVar1,lVar10,uVar2);
    cVar8 = *(char *)((long)param_3 + 1);
    if (cVar8 != -1) goto LAB_038fbda0;
  }
  if (*(char *)((long)param_3 + 2) != -1) {
    (**(code **)(*param_1 + 0x40))(param_1,uVar9,2,(long)*(char *)((long)param_3 + 2),lVar10,uVar2);
  }
  if (*(char *)((long)param_3 + 3) != -1) {
    (**(code **)(*param_1 + 0x40))(param_1,uVar9,5,(long)*(char *)((long)param_3 + 3),lVar10,uVar2);
  }
LAB_038fbe1c:
  return uVar1 != 0xffffffff;
}

