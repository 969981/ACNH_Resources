
uint FUN_03c27e60(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  short *local_258;
  long local_250;
  undefined1 auStack_248 [536];
  
  if (*(char *)param_2[1] == '\0') {
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_0156b428(auStack_248,"Param/%s",param_2[1]);
    uVar4 = FUN_03eba3a0(auStack_248);
    if ((uVar4 & 1) != 0) {
      if (param_3 == 0) {
        lVar7 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar1 = (long *)(lVar7 + 8);
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 0xa8);
        }
        param_3 = *plVar1;
      }
      lVar5 = FUN_03eba090(auStack_248,param_3,0x20,0,1,0);
      psVar8 = *(short **)(lVar5 + 8);
      local_250 = 0;
      local_258 = psVar8;
      if (psVar8 != (short *)0x0) {
        uVar6 = FUN_03eaa5e0(psVar8);
        if ((uVar6 & 1) == 0) {
          local_258 = (short *)0x0;
          local_250 = 0;
        }
        else {
          uVar2 = *(uint *)(psVar8 + 6);
          uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
          if (*psVar8 != 0x5942) {
            uVar3 = uVar2;
          }
          if (uVar3 != 0) {
            local_250 = (long)psVar8 + (ulong)uVar3;
          }
        }
      }
      FUN_03c28030(param_1,&local_258,0xffffffff);
    }
  }
  return uVar4 & 1;
}

