
int FUN_001e6a30(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    return -1;
  }
  lVar5 = *(long *)(param_1 + 0xd0);
  local_38 = 0;
  if (lVar5 != 0) {
    lVar1 = 0;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar1 = DAT_04bcbf58;
    }
    if (lVar1 != 0) {
      uVar2 = FUN_001e6b30(*(undefined8 *)(lVar5 + 0x10),param_2,param_3,param_4);
      goto LAB_001e6afc;
    }
  }
  uVar2 = nn::socket::InetNtohl(*(uint *)(param_4 + 0xc));
  local_3c = nn::socket::InetNtohs(*(ushort *)(param_4 + 10));
  uStack_40 = 0;
  plVar4 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
  local_44 = uVar2;
  uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3,&local_44,&local_38);
LAB_001e6afc:
  uVar3 = FUN_001e2c34(param_1,uVar2);
  return (uVar3 & 1) - 1;
}

