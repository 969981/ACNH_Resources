
byte FUN_001e2e38(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  
  if (*(char *)(param_1 + 0xc4) == '\0') {
    uVar4 = nn::socket::InetNtohl(*(uint *)(param_2 + 0xc));
    local_34 = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
    uStack_38 = 0;
    plVar6 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
    local_3c = uVar4;
    iVar5 = (**(code **)(*plVar6 + 0x38))(plVar6,&local_3c);
    bVar3 = FUN_001e2c34(param_1,iVar5);
    bVar2 = iVar5 == 3;
    bVar8 = bVar2 | bVar3;
    if (bVar2 || (bVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0xd0);
      if (lVar7 != 0) {
        lVar1 = 0;
        if (*(long *)(lVar7 + 0x10) != 0) {
          lVar1 = DAT_04bcbf58;
        }
        if (lVar1 != 0) {
          FUN_001e2f50(*(undefined8 *)(lVar7 + 0x10));
          FUN_001e3aa0(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x10),param_2,param_1 + 0xa8);
        }
      }
      *(undefined1 *)(param_1 + 0xc4) = 1;
      return bVar2 | bVar3 & 1;
    }
  }
  else {
    bVar8 = 1;
  }
  return bVar8 & 1;
}

