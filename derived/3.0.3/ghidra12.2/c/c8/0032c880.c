
void _INIT_30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  MutexType *pMVar3;
  
  puVar2 = PTR_DAT_04bceeb8;
  puVar1 = PTR_DAT_04bcee98;
  *(undefined8 *)(PTR_DAT_04bceeb8 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)puVar2 = 0;
  puVar2 = PTR_DAT_04bceeb0;
  pMVar3 = (MutexType *)(PTR_DAT_04bceeb0 + 8);
  *(undefined **)PTR_DAT_04bceeb0 = puVar1 + 0x10;
  nn::os::InitializeMutex(pMVar3,false,0);
  FUN_001001d0(PTR_LAB_04bcee90,puVar2,&__DT_FINI_ARRAY);
  return;
}

