
bool FUN_03c0c9c0(undefined8 param_1,ulong param_2,undefined1 (*param_3) [16],long *param_4,
                 long *param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  FileName *__src;
  undefined1 *__src_00;
  undefined1 auVar5 [16];
  undefined1 auStack_a0 [8];
  DeliveryCacheFile aDStack_98 [8];
  undefined1 local_90 [31];
  undefined1 local_71;
  FileName local_70 [31];
  undefined1 local_51;
  
  local_51 = 0;
  (**(code **)(*param_4 + 0x18))(param_4);
  __src = (FileName *)param_4[1];
  if (local_70 != __src) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar4 = 0;
    do {
      if (*(char *)(param_4[1] + lVar4) == '\0') {
LAB_03c0ca68:
        iVar3 = (int)lVar4;
joined_r0x03c0ca6c:
        if (0x1f < iVar3) {
          iVar3 = 0x1f;
        }
        goto LAB_03c0ca74;
      }
      lVar1 = param_4[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c0ca68;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar3 = (int)lVar4 + 2;
        goto joined_r0x03c0ca6c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    iVar3 = 0;
LAB_03c0ca74:
    memcpy(local_70,__src,(long)iVar3);
    local_70[iVar3] = (FileName)0x0;
  }
  local_71 = 0;
  (**(code **)(*param_5 + 0x18))(param_5);
  __src_00 = (undefined1 *)param_5[1];
  if (local_90 != __src_00) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar4 = 0;
    do {
      if (*(char *)(param_5[1] + lVar4) == '\0') {
LAB_03c0cb14:
        iVar3 = (int)lVar4;
joined_r0x03c0cb18:
        if (0x1f < iVar3) {
          iVar3 = 0x1f;
        }
        goto LAB_03c0cb20;
      }
      lVar1 = param_5[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c0cb14;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar3 = (int)lVar4 + 2;
        goto joined_r0x03c0cb18;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    iVar3 = 0;
LAB_03c0cb20:
    memcpy(local_90,__src_00,(long)iVar3);
    local_90[iVar3] = 0;
  }
  nn::bcat::DeliveryCacheFile::DeliveryCacheFile(aDStack_98);
  iVar3 = nn::bcat::DeliveryCacheFile::Open((DirectoryName *)aDStack_98,local_70);
  if (iVar3 == 0) {
    iVar3 = nn::bcat::DeliveryCacheFile::Read
                      ((ulong *)aDStack_98,(long)auStack_a0,(void *)0x0,param_2);
    if ((param_3 != (undefined1 (*) [16])0x0) && (iVar3 == 0)) {
      auVar5 = nn::bcat::DeliveryCacheFile::GetDigest();
      *param_3 = auVar5;
    }
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  nn::bcat::DeliveryCacheFile::~DeliveryCacheFile(aDStack_98);
  return bVar2;
}

